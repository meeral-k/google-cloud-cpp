// Copyright 2024 Google LLC
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
// source: google/cloud/kms/v1/autokey.proto

#include "google/cloud/kms/v1/internal/autokey_connection_impl.h"
#include "google/cloud/kms/v1/internal/autokey_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace kms_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<kms_v1::AutokeyRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<kms_v1::AutokeyRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<kms_v1::AutokeyBackoffPolicyOption>()->clone();
}

std::unique_ptr<kms_v1::AutokeyConnectionIdempotencyPolicy> idempotency_policy(
    Options const& options) {
  return options.get<kms_v1::AutokeyConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<kms_v1::AutokeyPollingPolicyOption>()->clone();
}

}  // namespace

AutokeyConnectionImpl::AutokeyConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<kms_v1_internal::AutokeyStub> stub, Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      AutokeyConnection::options())) {}

future<StatusOr<google::cloud::kms::v1::KeyHandle>>
AutokeyConnectionImpl::CreateKeyHandle(
    google::cloud::kms::v1::CreateKeyHandleRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateKeyHandle(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::kms::v1::KeyHandle>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::kms::v1::CreateKeyHandleRequest const& request) {
        return stub->AsyncCreateKeyHandle(cq, std::move(context),
                                          std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::kms::v1::KeyHandle>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::kms::v1::KeyHandle> AutokeyConnectionImpl::GetKeyHandle(
    google::cloud::kms::v1::GetKeyHandleRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetKeyHandle(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::kms::v1::GetKeyHandleRequest const& request) {
        return stub_->GetKeyHandle(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::kms::v1::ListKeyHandlesResponse>
AutokeyConnectionImpl::ListKeyHandles(
    google::cloud::kms::v1::ListKeyHandlesRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ListKeyHandles(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::kms::v1::ListKeyHandlesRequest const& request) {
        return stub_->ListKeyHandles(context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace kms_v1_internal
}  // namespace cloud
}  // namespace google
