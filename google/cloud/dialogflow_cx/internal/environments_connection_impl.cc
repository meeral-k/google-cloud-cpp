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
// source: google/cloud/dialogflow/cx/v3/environment.proto

#include "google/cloud/dialogflow_cx/internal/environments_connection_impl.h"
#include "google/cloud/dialogflow_cx/internal/environments_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EnvironmentsConnectionImpl::EnvironmentsConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<dialogflow_cx_internal::EnvironmentsStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      EnvironmentsConnection::options())) {}

StreamRange<google::cloud::dialogflow::cx::v3::Environment>
EnvironmentsConnectionImpl::ListEnvironments(
    google::cloud::dialogflow::cx::v3::ListEnvironmentsRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<dialogflow_cx::EnvironmentsRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListEnvironments(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::dialogflow::cx::v3::Environment>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::dialogflow::cx::v3::ListEnvironmentsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::dialogflow::cx::v3::
                       ListEnvironmentsRequest const& request) {
              return stub->ListEnvironments(context, request);
            },
            r, function_name);
      },
      [](google::cloud::dialogflow::cx::v3::ListEnvironmentsResponse r) {
        std::vector<google::cloud::dialogflow::cx::v3::Environment> result(
            r.environments().size());
        auto& messages = *r.mutable_environments();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::dialogflow::cx::v3::Environment>
EnvironmentsConnectionImpl::GetEnvironment(
    google::cloud::dialogflow::cx::v3::GetEnvironmentRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetEnvironment(request),
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::cx::v3::GetEnvironmentRequest const&
                 request) { return stub_->GetEnvironment(context, request); },
      request, __func__);
}

future<StatusOr<google::cloud::dialogflow::cx::v3::Environment>>
EnvironmentsConnectionImpl::CreateEnvironment(
    google::cloud::dialogflow::cx::v3::CreateEnvironmentRequest const&
        request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::dialogflow::cx::v3::Environment>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::dialogflow::cx::v3::CreateEnvironmentRequest const&
                 request) {
        return stub->AsyncCreateEnvironment(cq, std::move(context), request);
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
          google::cloud::dialogflow::cx::v3::Environment>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateEnvironment(request), polling_policy(),
      __func__);
}

future<StatusOr<google::cloud::dialogflow::cx::v3::Environment>>
EnvironmentsConnectionImpl::UpdateEnvironment(
    google::cloud::dialogflow::cx::v3::UpdateEnvironmentRequest const&
        request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::dialogflow::cx::v3::Environment>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::dialogflow::cx::v3::UpdateEnvironmentRequest const&
                 request) {
        return stub->AsyncUpdateEnvironment(cq, std::move(context), request);
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
          google::cloud::dialogflow::cx::v3::Environment>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateEnvironment(request), polling_policy(),
      __func__);
}

Status EnvironmentsConnectionImpl::DeleteEnvironment(
    google::cloud::dialogflow::cx::v3::DeleteEnvironmentRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteEnvironment(request),
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::cx::v3::DeleteEnvironmentRequest const&
                 request) {
        return stub_->DeleteEnvironment(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::dialogflow::cx::v3::Environment>
EnvironmentsConnectionImpl::LookupEnvironmentHistory(
    google::cloud::dialogflow::cx::v3::LookupEnvironmentHistoryRequest
        request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<dialogflow_cx::EnvironmentsRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->LookupEnvironmentHistory(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::dialogflow::cx::v3::Environment>>(
      std::move(request),
      [stub, retry, backoff, idempotency,
       function_name](google::cloud::dialogflow::cx::v3::
                          LookupEnvironmentHistoryRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::dialogflow::cx::v3::
                       LookupEnvironmentHistoryRequest const& request) {
              return stub->LookupEnvironmentHistory(context, request);
            },
            r, function_name);
      },
      [](google::cloud::dialogflow::cx::v3::LookupEnvironmentHistoryResponse
             r) {
        std::vector<google::cloud::dialogflow::cx::v3::Environment> result(
            r.environments().size());
        auto& messages = *r.mutable_environments();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::dialogflow::cx::v3::RunContinuousTestResponse>>
EnvironmentsConnectionImpl::RunContinuousTest(
    google::cloud::dialogflow::cx::v3::RunContinuousTestRequest const&
        request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::dialogflow::cx::v3::RunContinuousTestResponse>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::dialogflow::cx::v3::RunContinuousTestRequest const&
                 request) {
        return stub->AsyncRunContinuousTest(cq, std::move(context), request);
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
          google::cloud::dialogflow::cx::v3::RunContinuousTestResponse>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->RunContinuousTest(request), polling_policy(),
      __func__);
}

StreamRange<google::cloud::dialogflow::cx::v3::ContinuousTestResult>
EnvironmentsConnectionImpl::ListContinuousTestResults(
    google::cloud::dialogflow::cx::v3::ListContinuousTestResultsRequest
        request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<dialogflow_cx::EnvironmentsRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListContinuousTestResults(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::dialogflow::cx::v3::ContinuousTestResult>>(
      std::move(request),
      [stub, retry, backoff, idempotency,
       function_name](google::cloud::dialogflow::cx::v3::
                          ListContinuousTestResultsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::dialogflow::cx::v3::
                       ListContinuousTestResultsRequest const& request) {
              return stub->ListContinuousTestResults(context, request);
            },
            r, function_name);
      },
      [](google::cloud::dialogflow::cx::v3::ListContinuousTestResultsResponse
             r) {
        std::vector<google::cloud::dialogflow::cx::v3::ContinuousTestResult>
            result(r.continuous_test_results().size());
        auto& messages = *r.mutable_continuous_test_results();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::dialogflow::cx::v3::DeployFlowResponse>>
EnvironmentsConnectionImpl::DeployFlow(
    google::cloud::dialogflow::cx::v3::DeployFlowRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::dialogflow::cx::v3::DeployFlowResponse>(
      background_->cq(), request,
      [stub](
          google::cloud::CompletionQueue& cq,
          std::unique_ptr<grpc::ClientContext> context,
          google::cloud::dialogflow::cx::v3::DeployFlowRequest const& request) {
        return stub->AsyncDeployFlow(cq, std::move(context), request);
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
          google::cloud::dialogflow::cx::v3::DeployFlowResponse>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeployFlow(request), polling_policy(), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
