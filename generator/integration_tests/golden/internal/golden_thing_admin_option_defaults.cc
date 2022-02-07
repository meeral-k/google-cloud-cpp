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
// source: generator/integration_tests/test.proto

#include "generator/integration_tests/golden/internal/golden_thing_admin_option_defaults.h"
#include "generator/integration_tests/golden/golden_thing_admin_connection.h"
#include "generator/integration_tests/golden/golden_thing_admin_options.h"
#include "google/cloud/common_options.h"
#include "google/cloud/connection_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/getenv.h"
#include "google/cloud/internal/user_agent_prefix.h"
#include "google/cloud/options.h"
#include <memory>

namespace google {
namespace cloud {
namespace golden_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options GoldenThingAdminDefaultOptions(Options options) {
  if (!options.has<EndpointOption>()) {
    auto env = internal::GetEnv("GOLDEN_KITCHEN_SINK_ENDPOINT");
    options.set<EndpointOption>(
        env && !env->empty() ? *env : "test.googleapis.com");
  }
  if (!options.has<UserProjectOption>()) {
    auto env = internal::GetEnv("GOOGLE_CLOUD_CPP_USER_PROJECT");
    if (env.has_value() && !env->empty()) options.set<UserProjectOption>(*env);
  }
  if (auto emulator = internal::GetEnv("GOLDEN_KITCHEN_SINK_EMULATOR_HOST")) {
    options.set<EndpointOption>(*emulator).set<GrpcCredentialOption>(
        grpc::InsecureChannelCredentials());
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

  if (!options.has<golden::GoldenThingAdminRetryPolicyOption>()) {
    options.set<golden::GoldenThingAdminRetryPolicyOption>(
        golden::GoldenThingAdminLimitedTimeRetryPolicy(
            std::chrono::minutes(30)).clone());
  }
  if (!options.has<golden::GoldenThingAdminBackoffPolicyOption>()) {
    options.set<golden::GoldenThingAdminBackoffPolicyOption>(
        ExponentialBackoffPolicy(std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling).clone());
  }
  if (!options.has<golden::GoldenThingAdminPollingPolicyOption>()) {
    options.set<golden::GoldenThingAdminPollingPolicyOption>(
        GenericPollingPolicy<
            golden::GoldenThingAdminRetryPolicyOption::Type,
            golden::GoldenThingAdminBackoffPolicyOption::Type>(
            options.get<golden::GoldenThingAdminRetryPolicyOption>()->clone(),
            options.get<golden::GoldenThingAdminBackoffPolicyOption>()->clone())
            .clone());
  }
  if (!options.has<golden::GoldenThingAdminConnectionIdempotencyPolicyOption>()) {
    options.set<golden::GoldenThingAdminConnectionIdempotencyPolicyOption>(
        golden::MakeDefaultGoldenThingAdminConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace golden_internal
}  // namespace cloud
}  // namespace google
