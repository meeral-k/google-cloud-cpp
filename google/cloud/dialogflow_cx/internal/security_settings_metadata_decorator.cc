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
// source: google/cloud/dialogflow/cx/v3/security_settings.proto

#include "google/cloud/dialogflow_cx/internal/security_settings_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dialogflow/cx/v3/security_settings.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SecuritySettingsServiceMetadata::SecuritySettingsServiceMetadata(
    std::shared_ptr<SecuritySettingsServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::ApiClientHeader("generator")
              : std::move(api_client_header)) {}

StatusOr<google::cloud::dialogflow::cx::v3::SecuritySettings>
SecuritySettingsServiceMetadata::CreateSecuritySettings(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::CreateSecuritySettingsRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateSecuritySettings(context, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::SecuritySettings>
SecuritySettingsServiceMetadata::GetSecuritySettings(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::GetSecuritySettingsRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetSecuritySettings(context, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::SecuritySettings>
SecuritySettingsServiceMetadata::UpdateSecuritySettings(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::UpdateSecuritySettingsRequest const&
        request) {
  SetMetadata(
      context,
      absl::StrCat("security_settings.name=",
                   internal::UrlEncode(request.security_settings().name())));
  return child_->UpdateSecuritySettings(context, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::ListSecuritySettingsResponse>
SecuritySettingsServiceMetadata::ListSecuritySettings(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::ListSecuritySettingsRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListSecuritySettings(context, request);
}

Status SecuritySettingsServiceMetadata::DeleteSecuritySettings(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::DeleteSecuritySettingsRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteSecuritySettings(context, request);
}

void SecuritySettingsServiceMetadata::SetMetadata(
    grpc::ClientContext& context, std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void SecuritySettingsServiceMetadata::SetMetadata(
    grpc::ClientContext& context) {
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
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
