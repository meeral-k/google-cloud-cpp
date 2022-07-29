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
// source: google/cloud/dialogflow/v2/conversation_profile.proto

#include "google/cloud/dialogflow_es/internal/conversation_profiles_connection_impl.h"
#include "google/cloud/dialogflow_es/internal/conversation_profiles_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConversationProfilesConnectionImpl::ConversationProfilesConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<dialogflow_es_internal::ConversationProfilesStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), ConversationProfilesConnection::options())) {}

StreamRange<google::cloud::dialogflow::v2::ConversationProfile>
ConversationProfilesConnectionImpl::ListConversationProfiles(
    google::cloud::dialogflow::v2::ListConversationProfilesRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry =
      std::shared_ptr<dialogflow_es::ConversationProfilesRetryPolicy const>(
          retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListConversationProfiles(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::dialogflow::v2::ConversationProfile>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::dialogflow::v2::ListConversationProfilesRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::dialogflow::v2::
                       ListConversationProfilesRequest const& request) {
              return stub->ListConversationProfiles(context, request);
            },
            r, function_name);
      },
      [](google::cloud::dialogflow::v2::ListConversationProfilesResponse r) {
        std::vector<google::cloud::dialogflow::v2::ConversationProfile> result(
            r.conversation_profiles().size());
        auto& messages = *r.mutable_conversation_profiles();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::dialogflow::v2::ConversationProfile>
ConversationProfilesConnectionImpl::GetConversationProfile(
    google::cloud::dialogflow::v2::GetConversationProfileRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetConversationProfile(request),
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::v2::GetConversationProfileRequest const&
                 request) {
        return stub_->GetConversationProfile(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::dialogflow::v2::ConversationProfile>
ConversationProfilesConnectionImpl::CreateConversationProfile(
    google::cloud::dialogflow::v2::CreateConversationProfileRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateConversationProfile(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::dialogflow::v2::CreateConversationProfileRequest const&
              request) {
        return stub_->CreateConversationProfile(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::dialogflow::v2::ConversationProfile>
ConversationProfilesConnectionImpl::UpdateConversationProfile(
    google::cloud::dialogflow::v2::UpdateConversationProfileRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateConversationProfile(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::dialogflow::v2::UpdateConversationProfileRequest const&
              request) {
        return stub_->UpdateConversationProfile(context, request);
      },
      request, __func__);
}

Status ConversationProfilesConnectionImpl::DeleteConversationProfile(
    google::cloud::dialogflow::v2::DeleteConversationProfileRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteConversationProfile(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::dialogflow::v2::DeleteConversationProfileRequest const&
              request) {
        return stub_->DeleteConversationProfile(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::dialogflow::v2::ConversationProfile>>
ConversationProfilesConnectionImpl::SetSuggestionFeatureConfig(
    google::cloud::dialogflow::v2::SetSuggestionFeatureConfigRequest const&
        request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::dialogflow::v2::ConversationProfile>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::dialogflow::v2::
                 SetSuggestionFeatureConfigRequest const& request) {
        return stub->AsyncSetSuggestionFeatureConfig(cq, std::move(context),
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
          google::cloud::dialogflow::v2::ConversationProfile>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->SetSuggestionFeatureConfig(request),
      polling_policy(), __func__);
}

future<StatusOr<google::cloud::dialogflow::v2::ConversationProfile>>
ConversationProfilesConnectionImpl::ClearSuggestionFeatureConfig(
    google::cloud::dialogflow::v2::ClearSuggestionFeatureConfigRequest const&
        request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::dialogflow::v2::ConversationProfile>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::dialogflow::v2::
                 ClearSuggestionFeatureConfigRequest const& request) {
        return stub->AsyncClearSuggestionFeatureConfig(cq, std::move(context),
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
          google::cloud::dialogflow::v2::ConversationProfile>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->ClearSuggestionFeatureConfig(request),
      polling_policy(), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
