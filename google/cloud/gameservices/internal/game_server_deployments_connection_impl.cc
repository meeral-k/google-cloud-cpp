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
// source: google/cloud/gaming/v1/game_server_deployments_service.proto

#include "google/cloud/gameservices/internal/game_server_deployments_connection_impl.h"
#include "google/cloud/gameservices/internal/game_server_deployments_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace gameservices_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GameServerDeploymentsServiceConnectionImpl::
    GameServerDeploymentsServiceConnectionImpl(
        std::unique_ptr<google::cloud::BackgroundThreads> background,
        std::shared_ptr<gameservices_internal::GameServerDeploymentsServiceStub>
            stub,
        Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options),
          GameServerDeploymentsServiceConnection::options())) {}

StreamRange<google::cloud::gaming::v1::GameServerDeployment>
GameServerDeploymentsServiceConnectionImpl::ListGameServerDeployments(
    google::cloud::gaming::v1::ListGameServerDeploymentsRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<
      gameservices::GameServerDeploymentsServiceRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListGameServerDeployments(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::gaming::v1::GameServerDeployment>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::gaming::v1::ListGameServerDeploymentsRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::gaming::v1::
                       ListGameServerDeploymentsRequest const& request) {
              return stub->ListGameServerDeployments(context, request);
            },
            r, function_name);
      },
      [](google::cloud::gaming::v1::ListGameServerDeploymentsResponse r) {
        std::vector<google::cloud::gaming::v1::GameServerDeployment> result(
            r.game_server_deployments().size());
        auto& messages = *r.mutable_game_server_deployments();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::gaming::v1::GameServerDeployment>
GameServerDeploymentsServiceConnectionImpl::GetGameServerDeployment(
    google::cloud::gaming::v1::GetGameServerDeploymentRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetGameServerDeployment(request),
      [this](grpc::ClientContext& context,
             google::cloud::gaming::v1::GetGameServerDeploymentRequest const&
                 request) {
        return stub_->GetGameServerDeployment(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::gaming::v1::GameServerDeployment>>
GameServerDeploymentsServiceConnectionImpl::CreateGameServerDeployment(
    google::cloud::gaming::v1::CreateGameServerDeploymentRequest const&
        request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gaming::v1::GameServerDeployment>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::gaming::v1::CreateGameServerDeploymentRequest const&
                 request) {
        return stub->AsyncCreateGameServerDeployment(cq, std::move(context),
                                                     request);
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
          google::cloud::gaming::v1::GameServerDeployment>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateGameServerDeployment(request),
      polling_policy(), __func__);
}

future<StatusOr<google::cloud::gaming::v1::OperationMetadata>>
GameServerDeploymentsServiceConnectionImpl::DeleteGameServerDeployment(
    google::cloud::gaming::v1::DeleteGameServerDeploymentRequest const&
        request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gaming::v1::OperationMetadata>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::gaming::v1::DeleteGameServerDeploymentRequest const&
                 request) {
        return stub->AsyncDeleteGameServerDeployment(cq, std::move(context),
                                                     request);
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
          google::cloud::gaming::v1::OperationMetadata>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteGameServerDeployment(request),
      polling_policy(), __func__);
}

future<StatusOr<google::cloud::gaming::v1::GameServerDeployment>>
GameServerDeploymentsServiceConnectionImpl::UpdateGameServerDeployment(
    google::cloud::gaming::v1::UpdateGameServerDeploymentRequest const&
        request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gaming::v1::GameServerDeployment>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::gaming::v1::UpdateGameServerDeploymentRequest const&
                 request) {
        return stub->AsyncUpdateGameServerDeployment(cq, std::move(context),
                                                     request);
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
          google::cloud::gaming::v1::GameServerDeployment>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateGameServerDeployment(request),
      polling_policy(), __func__);
}

StatusOr<google::cloud::gaming::v1::GameServerDeploymentRollout>
GameServerDeploymentsServiceConnectionImpl::GetGameServerDeploymentRollout(
    google::cloud::gaming::v1::GetGameServerDeploymentRolloutRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetGameServerDeploymentRollout(request),
      [this](grpc::ClientContext& context,
             google::cloud::gaming::v1::
                 GetGameServerDeploymentRolloutRequest const& request) {
        return stub_->GetGameServerDeploymentRollout(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::gaming::v1::GameServerDeployment>>
GameServerDeploymentsServiceConnectionImpl::UpdateGameServerDeploymentRollout(
    google::cloud::gaming::v1::UpdateGameServerDeploymentRolloutRequest const&
        request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gaming::v1::GameServerDeployment>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::gaming::v1::
                 UpdateGameServerDeploymentRolloutRequest const& request) {
        return stub->AsyncUpdateGameServerDeploymentRollout(
            cq, std::move(context), request);
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
          google::cloud::gaming::v1::GameServerDeployment>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateGameServerDeploymentRollout(request),
      polling_policy(), __func__);
}

StatusOr<google::cloud::gaming::v1::PreviewGameServerDeploymentRolloutResponse>
GameServerDeploymentsServiceConnectionImpl::PreviewGameServerDeploymentRollout(
    google::cloud::gaming::v1::PreviewGameServerDeploymentRolloutRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->PreviewGameServerDeploymentRollout(request),
      [this](grpc::ClientContext& context,
             google::cloud::gaming::v1::
                 PreviewGameServerDeploymentRolloutRequest const& request) {
        return stub_->PreviewGameServerDeploymentRollout(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::gaming::v1::FetchDeploymentStateResponse>
GameServerDeploymentsServiceConnectionImpl::FetchDeploymentState(
    google::cloud::gaming::v1::FetchDeploymentStateRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->FetchDeploymentState(request),
      [this](grpc::ClientContext& context,
             google::cloud::gaming::v1::FetchDeploymentStateRequest const&
                 request) {
        return stub_->FetchDeploymentState(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gameservices_internal
}  // namespace cloud
}  // namespace google
