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

#include "google/cloud/dialogflow_es/internal/conversation_profiles_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dialogflow/v2/conversation_profile.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConversationProfilesMetadata::ConversationProfilesMetadata(
    std::shared_ptr<ConversationProfilesStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::ApiClientHeader("generator")
              : std::move(api_client_header)) {}

StatusOr<google::cloud::dialogflow::v2::ListConversationProfilesResponse>
ConversationProfilesMetadata::ListConversationProfiles(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::ListConversationProfilesRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListConversationProfiles(context, request);
}

StatusOr<google::cloud::dialogflow::v2::ConversationProfile>
ConversationProfilesMetadata::GetConversationProfile(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::GetConversationProfileRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetConversationProfile(context, request);
}

StatusOr<google::cloud::dialogflow::v2::ConversationProfile>
ConversationProfilesMetadata::CreateConversationProfile(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::CreateConversationProfileRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateConversationProfile(context, request);
}

StatusOr<google::cloud::dialogflow::v2::ConversationProfile>
ConversationProfilesMetadata::UpdateConversationProfile(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::UpdateConversationProfileRequest const&
        request) {
  SetMetadata(
      context,
      absl::StrCat("conversation_profile.name=",
                   internal::UrlEncode(request.conversation_profile().name())));
  return child_->UpdateConversationProfile(context, request);
}

Status ConversationProfilesMetadata::DeleteConversationProfile(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::DeleteConversationProfileRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteConversationProfile(context, request);
}

future<StatusOr<google::longrunning::Operation>>
ConversationProfilesMetadata::AsyncSetSuggestionFeatureConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::SetSuggestionFeatureConfigRequest const&
        request) {
  SetMetadata(
      *context,
      absl::StrCat("conversation_profile=",
                   internal::UrlEncode(request.conversation_profile())));
  return child_->AsyncSetSuggestionFeatureConfig(cq, std::move(context),
                                                 request);
}

future<StatusOr<google::longrunning::Operation>>
ConversationProfilesMetadata::AsyncClearSuggestionFeatureConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::ClearSuggestionFeatureConfigRequest const&
        request) {
  SetMetadata(
      *context,
      absl::StrCat("conversation_profile=",
                   internal::UrlEncode(request.conversation_profile())));
  return child_->AsyncClearSuggestionFeatureConfig(cq, std::move(context),
                                                   request);
}

future<StatusOr<google::longrunning::Operation>>
ConversationProfilesMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> ConversationProfilesMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void ConversationProfilesMetadata::SetMetadata(
    grpc::ClientContext& context, std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void ConversationProfilesMetadata::SetMetadata(grpc::ClientContext& context) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
