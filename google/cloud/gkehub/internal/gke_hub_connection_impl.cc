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
// source: google/cloud/gkehub/v1/service.proto

#include "google/cloud/gkehub/internal/gke_hub_connection_impl.h"
#include "google/cloud/gkehub/internal/gke_hub_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace gkehub_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GkeHubConnectionImpl::GkeHubConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<gkehub_internal::GkeHubStub> stub, Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      GkeHubConnection::options())) {}

StreamRange<google::cloud::gkehub::v1::Membership>
GkeHubConnectionImpl::ListMemberships(
    google::cloud::gkehub::v1::ListMembershipsRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<gkehub::GkeHubRetryPolicy const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListMemberships(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::gkehub::v1::Membership>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::gkehub::v1::ListMembershipsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::gkehub::v1::ListMembershipsRequest const&
                       request) {
              return stub->ListMemberships(context, request);
            },
            r, function_name);
      },
      [](google::cloud::gkehub::v1::ListMembershipsResponse r) {
        std::vector<google::cloud::gkehub::v1::Membership> result(
            r.resources().size());
        auto& messages = *r.mutable_resources();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StreamRange<google::cloud::gkehub::v1::Feature>
GkeHubConnectionImpl::ListFeatures(
    google::cloud::gkehub::v1::ListFeaturesRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<gkehub::GkeHubRetryPolicy const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListFeatures(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::gkehub::v1::Feature>>(
      std::move(request),
      [stub, retry, backoff, idempotency,
       function_name](google::cloud::gkehub::v1::ListFeaturesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::gkehub::v1::ListFeaturesRequest const& request) {
              return stub->ListFeatures(context, request);
            },
            r, function_name);
      },
      [](google::cloud::gkehub::v1::ListFeaturesResponse r) {
        std::vector<google::cloud::gkehub::v1::Feature> result(
            r.resources().size());
        auto& messages = *r.mutable_resources();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::gkehub::v1::Membership>
GkeHubConnectionImpl::GetMembership(
    google::cloud::gkehub::v1::GetMembershipRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetMembership(request),
      [this](grpc::ClientContext& context,
             google::cloud::gkehub::v1::GetMembershipRequest const& request) {
        return stub_->GetMembership(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::gkehub::v1::Feature> GkeHubConnectionImpl::GetFeature(
    google::cloud::gkehub::v1::GetFeatureRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetFeature(request),
      [this](grpc::ClientContext& context,
             google::cloud::gkehub::v1::GetFeatureRequest const& request) {
        return stub_->GetFeature(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::gkehub::v1::Membership>>
GkeHubConnectionImpl::CreateMembership(
    google::cloud::gkehub::v1::CreateMembershipRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gkehub::v1::Membership>(
      background_->cq(), request,
      [stub](
          google::cloud::CompletionQueue& cq,
          std::unique_ptr<grpc::ClientContext> context,
          google::cloud::gkehub::v1::CreateMembershipRequest const& request) {
        return stub->AsyncCreateMembership(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::gkehub::v1::Membership>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateMembership(request), polling_policy(),
      __func__);
}

future<StatusOr<google::cloud::gkehub::v1::Feature>>
GkeHubConnectionImpl::CreateFeature(
    google::cloud::gkehub::v1::CreateFeatureRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gkehub::v1::Feature>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::gkehub::v1::CreateFeatureRequest const& request) {
        return stub->AsyncCreateFeature(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::gkehub::v1::Feature>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateFeature(request), polling_policy(), __func__);
}

future<StatusOr<google::cloud::gkehub::v1::OperationMetadata>>
GkeHubConnectionImpl::DeleteMembership(
    google::cloud::gkehub::v1::DeleteMembershipRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gkehub::v1::OperationMetadata>(
      background_->cq(), request,
      [stub](
          google::cloud::CompletionQueue& cq,
          std::unique_ptr<grpc::ClientContext> context,
          google::cloud::gkehub::v1::DeleteMembershipRequest const& request) {
        return stub->AsyncDeleteMembership(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::gkehub::v1::OperationMetadata>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteMembership(request), polling_policy(),
      __func__);
}

future<StatusOr<google::cloud::gkehub::v1::OperationMetadata>>
GkeHubConnectionImpl::DeleteFeature(
    google::cloud::gkehub::v1::DeleteFeatureRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gkehub::v1::OperationMetadata>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::gkehub::v1::DeleteFeatureRequest const& request) {
        return stub->AsyncDeleteFeature(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::gkehub::v1::OperationMetadata>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteFeature(request), polling_policy(), __func__);
}

future<StatusOr<google::cloud::gkehub::v1::Membership>>
GkeHubConnectionImpl::UpdateMembership(
    google::cloud::gkehub::v1::UpdateMembershipRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gkehub::v1::Membership>(
      background_->cq(), request,
      [stub](
          google::cloud::CompletionQueue& cq,
          std::unique_ptr<grpc::ClientContext> context,
          google::cloud::gkehub::v1::UpdateMembershipRequest const& request) {
        return stub->AsyncUpdateMembership(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::gkehub::v1::Membership>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateMembership(request), polling_policy(),
      __func__);
}

future<StatusOr<google::cloud::gkehub::v1::Feature>>
GkeHubConnectionImpl::UpdateFeature(
    google::cloud::gkehub::v1::UpdateFeatureRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gkehub::v1::Feature>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::gkehub::v1::UpdateFeatureRequest const& request) {
        return stub->AsyncUpdateFeature(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::gkehub::v1::Feature>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateFeature(request), polling_policy(), __func__);
}

StatusOr<google::cloud::gkehub::v1::GenerateConnectManifestResponse>
GkeHubConnectionImpl::GenerateConnectManifest(
    google::cloud::gkehub::v1::GenerateConnectManifestRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GenerateConnectManifest(request),
      [this](grpc::ClientContext& context,
             google::cloud::gkehub::v1::GenerateConnectManifestRequest const&
                 request) {
        return stub_->GenerateConnectManifest(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkehub_internal
}  // namespace cloud
}  // namespace google
