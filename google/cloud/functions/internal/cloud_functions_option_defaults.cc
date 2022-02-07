// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/functions/v1/functions.proto

#include "google/cloud/functions/internal/cloud_functions_option_defaults.h"
#include "google/cloud/functions/cloud_functions_connection.h"
#include "google/cloud/functions/cloud_functions_options.h"
#include "google/cloud/common_options.h"
#include "google/cloud/connection_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/getenv.h"
#include "google/cloud/internal/user_agent_prefix.h"
#include "google/cloud/options.h"
#include <memory>

namespace google {
namespace cloud {
namespace functions_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options CloudFunctionsServiceDefaultOptions(Options options) {
  if (!options.has<EndpointOption>()) {
    auto env =
        internal::GetEnv("GOOGLE_CLOUD_CPP_CLOUD_FUNCTIONS_SERVICE_ENDPOINT");
    options.set<EndpointOption>(
        env && !env->empty() ? *env : "cloudfunctions.googleapis.com");
  }
  if (!options.has<UserProjectOption>()) {
    auto env = internal::GetEnv("GOOGLE_CLOUD_CPP_USER_PROJECT");
    if (env.has_value() && !env->empty()) options.set<UserProjectOption>(*env);
  }
  if (!options.has<GrpcCredentialOption>()) {
    options.set<GrpcCredentialOption>(grpc::GoogleDefaultCredentials());
  }
  if (!options.has<TracingComponentsOption>()) {
    options.set<TracingComponentsOption>(internal::DefaultTracingComponents());
  }
  if (!options.has<GrpcTracingOptionsOption>()) {
    options.set<GrpcTracingOptionsOption>(internal::DefaultTracingOptions());
  }
  auto& products = options.lookup<UserAgentProductsOption>();
  products.insert(products.begin(), google::cloud::internal::UserAgentPrefix());

  if (!options.has<functions::CloudFunctionsServiceRetryPolicyOption>()) {
    options.set<functions::CloudFunctionsServiceRetryPolicyOption>(
        functions::CloudFunctionsServiceLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<functions::CloudFunctionsServiceBackoffPolicyOption>()) {
    options.set<functions::CloudFunctionsServiceBackoffPolicyOption>(
        ExponentialBackoffPolicy(std::chrono::seconds(1),
                                 std::chrono::minutes(5), kBackoffScaling)
            .clone());
  }
  if (!options.has<functions::CloudFunctionsServicePollingPolicyOption>()) {
    options.set<functions::CloudFunctionsServicePollingPolicyOption>(
        GenericPollingPolicy<
            functions::CloudFunctionsServiceRetryPolicyOption::Type,
            functions::CloudFunctionsServiceBackoffPolicyOption::Type>(
            options.get<functions::CloudFunctionsServiceRetryPolicyOption>()
                ->clone(),
            options.get<functions::CloudFunctionsServiceBackoffPolicyOption>()
                ->clone())
            .clone());
  }
  if (!options
           .has<functions::
                    CloudFunctionsServiceConnectionIdempotencyPolicyOption>()) {
    options
        .set<functions::CloudFunctionsServiceConnectionIdempotencyPolicyOption>(
            functions::
                MakeDefaultCloudFunctionsServiceConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace functions_internal
}  // namespace cloud
}  // namespace google
