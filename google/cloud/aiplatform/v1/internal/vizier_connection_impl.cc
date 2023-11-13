// Copyright 2023 Google LLC
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
// source: google/cloud/aiplatform/v1/vizier_service.proto

#include "google/cloud/aiplatform/v1/internal/vizier_connection_impl.h"
#include "google/cloud/aiplatform/v1/internal/vizier_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<aiplatform_v1::VizierServiceRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<aiplatform_v1::VizierServiceRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<aiplatform_v1::VizierServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<aiplatform_v1::VizierServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<aiplatform_v1::VizierServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<aiplatform_v1::VizierServicePollingPolicyOption>()
      ->clone();
}

}  // namespace

VizierServiceConnectionImpl::VizierServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<aiplatform_v1_internal::VizierServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      VizierServiceConnection::options())) {}

StatusOr<google::cloud::aiplatform::v1::Study>
VizierServiceConnectionImpl::CreateStudy(
    google::cloud::aiplatform::v1::CreateStudyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateStudy(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::CreateStudyRequest const& request) {
        return stub_->CreateStudy(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::aiplatform::v1::Study>
VizierServiceConnectionImpl::GetStudy(
    google::cloud::aiplatform::v1::GetStudyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetStudy(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::GetStudyRequest const& request) {
        return stub_->GetStudy(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::aiplatform::v1::Study>
VizierServiceConnectionImpl::ListStudies(
    google::cloud::aiplatform::v1::ListStudiesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListStudies(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::aiplatform::v1::Study>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<aiplatform_v1::VizierServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::aiplatform::v1::ListStudiesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::aiplatform::v1::ListStudiesRequest const&
                       request) { return stub->ListStudies(context, request); },
            r, function_name);
      },
      [](google::cloud::aiplatform::v1::ListStudiesResponse r) {
        std::vector<google::cloud::aiplatform::v1::Study> result(
            r.studies().size());
        auto& messages = *r.mutable_studies();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

Status VizierServiceConnectionImpl::DeleteStudy(
    google::cloud::aiplatform::v1::DeleteStudyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteStudy(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::DeleteStudyRequest const& request) {
        return stub_->DeleteStudy(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::aiplatform::v1::Study>
VizierServiceConnectionImpl::LookupStudy(
    google::cloud::aiplatform::v1::LookupStudyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->LookupStudy(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::LookupStudyRequest const& request) {
        return stub_->LookupStudy(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::aiplatform::v1::SuggestTrialsResponse>>
VizierServiceConnectionImpl::SuggestTrials(
    google::cloud::aiplatform::v1::SuggestTrialsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::SuggestTrialsResponse>(
      background_->cq(), current, request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::aiplatform::v1::SuggestTrialsRequest const& request) {
        return stub->AsyncSuggestTrials(cq, std::move(context), options,
                                        request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::aiplatform::v1::SuggestTrialsResponse>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->SuggestTrials(request),
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::aiplatform::v1::Trial>
VizierServiceConnectionImpl::CreateTrial(
    google::cloud::aiplatform::v1::CreateTrialRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateTrial(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::CreateTrialRequest const& request) {
        return stub_->CreateTrial(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::aiplatform::v1::Trial>
VizierServiceConnectionImpl::GetTrial(
    google::cloud::aiplatform::v1::GetTrialRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetTrial(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::GetTrialRequest const& request) {
        return stub_->GetTrial(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::aiplatform::v1::Trial>
VizierServiceConnectionImpl::ListTrials(
    google::cloud::aiplatform::v1::ListTrialsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListTrials(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::aiplatform::v1::Trial>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<aiplatform_v1::VizierServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::aiplatform::v1::ListTrialsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::aiplatform::v1::ListTrialsRequest const&
                       request) { return stub->ListTrials(context, request); },
            r, function_name);
      },
      [](google::cloud::aiplatform::v1::ListTrialsResponse r) {
        std::vector<google::cloud::aiplatform::v1::Trial> result(
            r.trials().size());
        auto& messages = *r.mutable_trials();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::aiplatform::v1::Trial>
VizierServiceConnectionImpl::AddTrialMeasurement(
    google::cloud::aiplatform::v1::AddTrialMeasurementRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->AddTrialMeasurement(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::AddTrialMeasurementRequest const&
                 request) {
        return stub_->AddTrialMeasurement(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::aiplatform::v1::Trial>
VizierServiceConnectionImpl::CompleteTrial(
    google::cloud::aiplatform::v1::CompleteTrialRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CompleteTrial(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::aiplatform::v1::CompleteTrialRequest const& request) {
        return stub_->CompleteTrial(context, request);
      },
      request, __func__);
}

Status VizierServiceConnectionImpl::DeleteTrial(
    google::cloud::aiplatform::v1::DeleteTrialRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteTrial(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::DeleteTrialRequest const& request) {
        return stub_->DeleteTrial(context, request);
      },
      request, __func__);
}

future<StatusOr<
    google::cloud::aiplatform::v1::CheckTrialEarlyStoppingStateResponse>>
VizierServiceConnectionImpl::CheckTrialEarlyStoppingState(
    google::cloud::aiplatform::v1::CheckTrialEarlyStoppingStateRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::CheckTrialEarlyStoppingStateResponse>(
      background_->cq(), current, request,
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::cloud::aiplatform::v1::
                         CheckTrialEarlyStoppingStateRequest const& request) {
        return stub->AsyncCheckTrialEarlyStoppingState(cq, std::move(context),
                                                       options, request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::aiplatform::v1::CheckTrialEarlyStoppingStateResponse>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CheckTrialEarlyStoppingState(request),
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::aiplatform::v1::Trial>
VizierServiceConnectionImpl::StopTrial(
    google::cloud::aiplatform::v1::StopTrialRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->StopTrial(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::StopTrialRequest const& request) {
        return stub_->StopTrial(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::aiplatform::v1::ListOptimalTrialsResponse>
VizierServiceConnectionImpl::ListOptimalTrials(
    google::cloud::aiplatform::v1::ListOptimalTrialsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ListOptimalTrials(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::ListOptimalTrialsRequest const&
                 request) {
        return stub_->ListOptimalTrials(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
