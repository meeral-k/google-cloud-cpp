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
// source: google/cloud/accessapproval/v1/accessapproval.proto

#include "google/cloud/accessapproval/access_approval_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace accessapproval {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AccessApprovalClient::AccessApprovalClient(
    std::shared_ptr<AccessApprovalConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
AccessApprovalClient::~AccessApprovalClient() = default;

StreamRange<google::cloud::accessapproval::v1::ApprovalRequest>
AccessApprovalClient::ListApprovalRequests(std::string const& parent,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::accessapproval::v1::ListApprovalRequestsMessage request;
  request.set_parent(parent);
  return connection_->ListApprovalRequests(request);
}

StreamRange<google::cloud::accessapproval::v1::ApprovalRequest>
AccessApprovalClient::ListApprovalRequests(
    google::cloud::accessapproval::v1::ListApprovalRequestsMessage request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListApprovalRequests(std::move(request));
}

StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
AccessApprovalClient::GetApprovalRequest(std::string const& name,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::accessapproval::v1::GetApprovalRequestMessage request;
  request.set_name(name);
  return connection_->GetApprovalRequest(request);
}

StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
AccessApprovalClient::GetApprovalRequest(
    google::cloud::accessapproval::v1::GetApprovalRequestMessage const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetApprovalRequest(request);
}

StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
AccessApprovalClient::ApproveApprovalRequest(
    google::cloud::accessapproval::v1::ApproveApprovalRequestMessage const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ApproveApprovalRequest(request);
}

StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
AccessApprovalClient::DismissApprovalRequest(
    google::cloud::accessapproval::v1::DismissApprovalRequestMessage const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DismissApprovalRequest(request);
}

StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
AccessApprovalClient::InvalidateApprovalRequest(
    google::cloud::accessapproval::v1::InvalidateApprovalRequestMessage const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InvalidateApprovalRequest(request);
}

StatusOr<google::cloud::accessapproval::v1::AccessApprovalSettings>
AccessApprovalClient::GetAccessApprovalSettings(std::string const& name,
                                                Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::accessapproval::v1::GetAccessApprovalSettingsMessage request;
  request.set_name(name);
  return connection_->GetAccessApprovalSettings(request);
}

StatusOr<google::cloud::accessapproval::v1::AccessApprovalSettings>
AccessApprovalClient::GetAccessApprovalSettings(
    google::cloud::accessapproval::v1::GetAccessApprovalSettingsMessage const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetAccessApprovalSettings(request);
}

StatusOr<google::cloud::accessapproval::v1::AccessApprovalSettings>
AccessApprovalClient::UpdateAccessApprovalSettings(
    google::cloud::accessapproval::v1::AccessApprovalSettings const& settings,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::accessapproval::v1::UpdateAccessApprovalSettingsMessage
      request;
  *request.mutable_settings() = settings;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateAccessApprovalSettings(request);
}

StatusOr<google::cloud::accessapproval::v1::AccessApprovalSettings>
AccessApprovalClient::UpdateAccessApprovalSettings(
    google::cloud::accessapproval::v1::
        UpdateAccessApprovalSettingsMessage const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateAccessApprovalSettings(request);
}

Status AccessApprovalClient::DeleteAccessApprovalSettings(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::accessapproval::v1::DeleteAccessApprovalSettingsMessage
      request;
  request.set_name(name);
  return connection_->DeleteAccessApprovalSettings(request);
}

Status AccessApprovalClient::DeleteAccessApprovalSettings(
    google::cloud::accessapproval::v1::
        DeleteAccessApprovalSettingsMessage const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteAccessApprovalSettings(request);
}

StatusOr<google::cloud::accessapproval::v1::AccessApprovalServiceAccount>
AccessApprovalClient::GetAccessApprovalServiceAccount(std::string const& name,
                                                      Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::accessapproval::v1::GetAccessApprovalServiceAccountMessage
      request;
  request.set_name(name);
  return connection_->GetAccessApprovalServiceAccount(request);
}

StatusOr<google::cloud::accessapproval::v1::AccessApprovalServiceAccount>
AccessApprovalClient::GetAccessApprovalServiceAccount(
    google::cloud::accessapproval::v1::
        GetAccessApprovalServiceAccountMessage const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetAccessApprovalServiceAccount(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace accessapproval
}  // namespace cloud
}  // namespace google
