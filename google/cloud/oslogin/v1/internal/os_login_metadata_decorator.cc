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
// source: google/cloud/oslogin/v1/oslogin.proto

#include "google/cloud/oslogin/v1/internal/os_login_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/oslogin/v1/oslogin.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace oslogin_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

OsLoginServiceMetadata::OsLoginServiceMetadata(
    std::shared_ptr<OsLoginServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::oslogin::common::SshPublicKey>
OsLoginServiceMetadata::CreateSshPublicKey(
    grpc::ClientContext& context,
    google::cloud::oslogin::v1::CreateSshPublicKeyRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateSshPublicKey(context, request);
}

Status OsLoginServiceMetadata::DeletePosixAccount(
    grpc::ClientContext& context,
    google::cloud::oslogin::v1::DeletePosixAccountRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeletePosixAccount(context, request);
}

Status OsLoginServiceMetadata::DeleteSshPublicKey(
    grpc::ClientContext& context,
    google::cloud::oslogin::v1::DeleteSshPublicKeyRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteSshPublicKey(context, request);
}

StatusOr<google::cloud::oslogin::v1::LoginProfile>
OsLoginServiceMetadata::GetLoginProfile(
    grpc::ClientContext& context,
    google::cloud::oslogin::v1::GetLoginProfileRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetLoginProfile(context, request);
}

StatusOr<google::cloud::oslogin::common::SshPublicKey>
OsLoginServiceMetadata::GetSshPublicKey(
    grpc::ClientContext& context,
    google::cloud::oslogin::v1::GetSshPublicKeyRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetSshPublicKey(context, request);
}

StatusOr<google::cloud::oslogin::v1::ImportSshPublicKeyResponse>
OsLoginServiceMetadata::ImportSshPublicKey(
    grpc::ClientContext& context,
    google::cloud::oslogin::v1::ImportSshPublicKeyRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ImportSshPublicKey(context, request);
}

StatusOr<google::cloud::oslogin::common::SshPublicKey>
OsLoginServiceMetadata::UpdateSshPublicKey(
    grpc::ClientContext& context,
    google::cloud::oslogin::v1::UpdateSshPublicKeyRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->UpdateSshPublicKey(context, request);
}

void OsLoginServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                         std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void OsLoginServiceMetadata::SetMetadata(grpc::ClientContext& context) {
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
}  // namespace oslogin_v1_internal
}  // namespace cloud
}  // namespace google
