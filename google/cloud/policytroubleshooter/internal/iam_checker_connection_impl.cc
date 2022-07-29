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
// source: google/cloud/policytroubleshooter/v1/checker.proto

#include "google/cloud/policytroubleshooter/internal/iam_checker_connection_impl.h"
#include "google/cloud/policytroubleshooter/internal/iam_checker_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace policytroubleshooter_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

IamCheckerConnectionImpl::IamCheckerConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<policytroubleshooter_internal::IamCheckerStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      IamCheckerConnection::options())) {}

StatusOr<google::cloud::policytroubleshooter::v1::TroubleshootIamPolicyResponse>
IamCheckerConnectionImpl::TroubleshootIamPolicy(
    google::cloud::policytroubleshooter::v1::TroubleshootIamPolicyRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->TroubleshootIamPolicy(request),
      [this](grpc::ClientContext& context,
             google::cloud::policytroubleshooter::v1::
                 TroubleshootIamPolicyRequest const& request) {
        return stub_->TroubleshootIamPolicy(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace policytroubleshooter_internal
}  // namespace cloud
}  // namespace google
