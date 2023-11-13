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
// source: google/cloud/domains/v1/domains.proto

#include "google/cloud/domains/v1/internal/domains_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/domains/v1/domains.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace domains_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DomainsMetadata::DomainsMetadata(
    std::shared_ptr<DomainsStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::domains::v1::SearchDomainsResponse>
DomainsMetadata::SearchDomains(
    grpc::ClientContext& context,
    google::cloud::domains::v1::SearchDomainsRequest const& request) {
  SetMetadata(
      context, internal::CurrentOptions(),
      absl::StrCat("location=", internal::UrlEncode(request.location())));
  return child_->SearchDomains(context, request);
}

StatusOr<google::cloud::domains::v1::RetrieveRegisterParametersResponse>
DomainsMetadata::RetrieveRegisterParameters(
    grpc::ClientContext& context,
    google::cloud::domains::v1::RetrieveRegisterParametersRequest const&
        request) {
  SetMetadata(
      context, internal::CurrentOptions(),
      absl::StrCat("location=", internal::UrlEncode(request.location())));
  return child_->RetrieveRegisterParameters(context, request);
}

future<StatusOr<google::longrunning::Operation>>
DomainsMetadata::AsyncRegisterDomain(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::domains::v1::RegisterDomainRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncRegisterDomain(cq, std::move(context), options, request);
}

StatusOr<google::cloud::domains::v1::RetrieveTransferParametersResponse>
DomainsMetadata::RetrieveTransferParameters(
    grpc::ClientContext& context,
    google::cloud::domains::v1::RetrieveTransferParametersRequest const&
        request) {
  SetMetadata(
      context, internal::CurrentOptions(),
      absl::StrCat("location=", internal::UrlEncode(request.location())));
  return child_->RetrieveTransferParameters(context, request);
}

future<StatusOr<google::longrunning::Operation>>
DomainsMetadata::AsyncTransferDomain(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::domains::v1::TransferDomainRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncTransferDomain(cq, std::move(context), options, request);
}

StatusOr<google::cloud::domains::v1::ListRegistrationsResponse>
DomainsMetadata::ListRegistrations(
    grpc::ClientContext& context,
    google::cloud::domains::v1::ListRegistrationsRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListRegistrations(context, request);
}

StatusOr<google::cloud::domains::v1::Registration>
DomainsMetadata::GetRegistration(
    grpc::ClientContext& context,
    google::cloud::domains::v1::GetRegistrationRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetRegistration(context, request);
}

future<StatusOr<google::longrunning::Operation>>
DomainsMetadata::AsyncUpdateRegistration(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::domains::v1::UpdateRegistrationRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("registration.name=",
                           internal::UrlEncode(request.registration().name())));
  return child_->AsyncUpdateRegistration(cq, std::move(context), options,
                                         request);
}

future<StatusOr<google::longrunning::Operation>>
DomainsMetadata::AsyncConfigureManagementSettings(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::domains::v1::ConfigureManagementSettingsRequest const&
        request) {
  SetMetadata(*context, options,
              absl::StrCat("registration=",
                           internal::UrlEncode(request.registration())));
  return child_->AsyncConfigureManagementSettings(cq, std::move(context),
                                                  options, request);
}

future<StatusOr<google::longrunning::Operation>>
DomainsMetadata::AsyncConfigureDnsSettings(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::domains::v1::ConfigureDnsSettingsRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("registration=",
                           internal::UrlEncode(request.registration())));
  return child_->AsyncConfigureDnsSettings(cq, std::move(context), options,
                                           request);
}

future<StatusOr<google::longrunning::Operation>>
DomainsMetadata::AsyncConfigureContactSettings(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::domains::v1::ConfigureContactSettingsRequest const&
        request) {
  SetMetadata(*context, options,
              absl::StrCat("registration=",
                           internal::UrlEncode(request.registration())));
  return child_->AsyncConfigureContactSettings(cq, std::move(context), options,
                                               request);
}

future<StatusOr<google::longrunning::Operation>>
DomainsMetadata::AsyncExportRegistration(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::domains::v1::ExportRegistrationRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncExportRegistration(cq, std::move(context), options,
                                         request);
}

future<StatusOr<google::longrunning::Operation>>
DomainsMetadata::AsyncDeleteRegistration(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::domains::v1::DeleteRegistrationRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteRegistration(cq, std::move(context), options,
                                         request);
}

StatusOr<google::cloud::domains::v1::AuthorizationCode>
DomainsMetadata::RetrieveAuthorizationCode(
    grpc::ClientContext& context,
    google::cloud::domains::v1::RetrieveAuthorizationCodeRequest const&
        request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("registration=",
                           internal::UrlEncode(request.registration())));
  return child_->RetrieveAuthorizationCode(context, request);
}

StatusOr<google::cloud::domains::v1::AuthorizationCode>
DomainsMetadata::ResetAuthorizationCode(
    grpc::ClientContext& context,
    google::cloud::domains::v1::ResetAuthorizationCodeRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("registration=",
                           internal::UrlEncode(request.registration())));
  return child_->ResetAuthorizationCode(context, request);
}

future<StatusOr<google::longrunning::Operation>>
DomainsMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), options, request);
}

future<Status> DomainsMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context), options, request);
}

void DomainsMetadata::SetMetadata(grpc::ClientContext& context,
                                  Options const& options,
                                  std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void DomainsMetadata::SetMetadata(grpc::ClientContext& context,
                                  Options const& options) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace domains_v1_internal
}  // namespace cloud
}  // namespace google
