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
// source:
// google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto

#include "google/cloud/beyondcorp/internal/app_connections_connection_impl.h"
#include "google/cloud/beyondcorp/internal/app_connections_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace beyondcorp_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AppConnectionsServiceConnectionImpl::AppConnectionsServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<beyondcorp_internal::AppConnectionsServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), AppConnectionsServiceConnection::options())) {}

StreamRange<google::cloud::beyondcorp::appconnections::v1::AppConnection>
AppConnectionsServiceConnectionImpl::ListAppConnections(
    google::cloud::beyondcorp::appconnections::v1::ListAppConnectionsRequest
        request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry =
      std::shared_ptr<beyondcorp::AppConnectionsServiceRetryPolicy const>(
          retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListAppConnections(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<StreamRange<
      google::cloud::beyondcorp::appconnections::v1::AppConnection>>(
      std::move(request),
      [stub, retry, backoff, idempotency,
       function_name](google::cloud::beyondcorp::appconnections::v1::
                          ListAppConnectionsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::beyondcorp::appconnections::v1::
                       ListAppConnectionsRequest const& request) {
              return stub->ListAppConnections(context, request);
            },
            r, function_name);
      },
      [](google::cloud::beyondcorp::appconnections::v1::
             ListAppConnectionsResponse r) {
        std::vector<
            google::cloud::beyondcorp::appconnections::v1::AppConnection>
            result(r.app_connections().size());
        auto& messages = *r.mutable_app_connections();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>
AppConnectionsServiceConnectionImpl::GetAppConnection(
    google::cloud::beyondcorp::appconnections::v1::
        GetAppConnectionRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetAppConnection(request),
      [this](grpc::ClientContext& context,
             google::cloud::beyondcorp::appconnections::v1::
                 GetAppConnectionRequest const& request) {
        return stub_->GetAppConnection(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>>
AppConnectionsServiceConnectionImpl::CreateAppConnection(
    google::cloud::beyondcorp::appconnections::v1::
        CreateAppConnectionRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::beyondcorp::appconnections::v1::AppConnection>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::beyondcorp::appconnections::v1::
                 CreateAppConnectionRequest const& request) {
        return stub->AsyncCreateAppConnection(cq, std::move(context), request);
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
          google::cloud::beyondcorp::appconnections::v1::AppConnection>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateAppConnection(request), polling_policy(),
      __func__);
}

future<StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>>
AppConnectionsServiceConnectionImpl::UpdateAppConnection(
    google::cloud::beyondcorp::appconnections::v1::
        UpdateAppConnectionRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::beyondcorp::appconnections::v1::AppConnection>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::beyondcorp::appconnections::v1::
                 UpdateAppConnectionRequest const& request) {
        return stub->AsyncUpdateAppConnection(cq, std::move(context), request);
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
          google::cloud::beyondcorp::appconnections::v1::AppConnection>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateAppConnection(request), polling_policy(),
      __func__);
}

future<StatusOr<google::cloud::beyondcorp::appconnections::v1::
                    AppConnectionOperationMetadata>>
AppConnectionsServiceConnectionImpl::DeleteAppConnection(
    google::cloud::beyondcorp::appconnections::v1::
        DeleteAppConnectionRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::beyondcorp::appconnections::v1::
          AppConnectionOperationMetadata>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::beyondcorp::appconnections::v1::
                 DeleteAppConnectionRequest const& request) {
        return stub->AsyncDeleteAppConnection(cq, std::move(context), request);
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
          google::cloud::beyondcorp::appconnections::v1::
              AppConnectionOperationMetadata>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteAppConnection(request), polling_policy(),
      __func__);
}

StreamRange<google::cloud::beyondcorp::appconnections::v1::
                ResolveAppConnectionsResponse::AppConnectionDetails>
AppConnectionsServiceConnectionImpl::ResolveAppConnections(
    google::cloud::beyondcorp::appconnections::v1::ResolveAppConnectionsRequest
        request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry =
      std::shared_ptr<beyondcorp::AppConnectionsServiceRetryPolicy const>(
          retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ResolveAppConnections(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::beyondcorp::appconnections::v1::
                      ResolveAppConnectionsResponse::AppConnectionDetails>>(
      std::move(request),
      [stub, retry, backoff, idempotency,
       function_name](google::cloud::beyondcorp::appconnections::v1::
                          ResolveAppConnectionsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::beyondcorp::appconnections::v1::
                       ResolveAppConnectionsRequest const& request) {
              return stub->ResolveAppConnections(context, request);
            },
            r, function_name);
      },
      [](google::cloud::beyondcorp::appconnections::v1::
             ResolveAppConnectionsResponse r) {
        std::vector<google::cloud::beyondcorp::appconnections::v1::
                        ResolveAppConnectionsResponse::AppConnectionDetails>
            result(r.app_connection_details().size());
        auto& messages = *r.mutable_app_connection_details();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_internal
}  // namespace cloud
}  // namespace google
