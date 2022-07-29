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
// google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto

#include "google/cloud/beyondcorp/client_connector_services_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace beyondcorp {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ClientConnectorServicesServiceClient::ClientConnectorServicesServiceClient(
    std::shared_ptr<ClientConnectorServicesServiceConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
ClientConnectorServicesServiceClient::~ClientConnectorServicesServiceClient() =
    default;

StreamRange<google::cloud::beyondcorp::clientconnectorservices::v1::
                ClientConnectorService>
ClientConnectorServicesServiceClient::ListClientConnectorServices(
    std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::beyondcorp::clientconnectorservices::v1::
      ListClientConnectorServicesRequest request;
  request.set_parent(parent);
  return connection_->ListClientConnectorServices(request);
}

StreamRange<google::cloud::beyondcorp::clientconnectorservices::v1::
                ClientConnectorService>
ClientConnectorServicesServiceClient::ListClientConnectorServices(
    google::cloud::beyondcorp::clientconnectorservices::v1::
        ListClientConnectorServicesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListClientConnectorServices(std::move(request));
}

StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
             ClientConnectorService>
ClientConnectorServicesServiceClient::GetClientConnectorService(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::beyondcorp::clientconnectorservices::v1::
      GetClientConnectorServiceRequest request;
  request.set_name(name);
  return connection_->GetClientConnectorService(request);
}

StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
             ClientConnectorService>
ClientConnectorServicesServiceClient::GetClientConnectorService(
    google::cloud::beyondcorp::clientconnectorservices::v1::
        GetClientConnectorServiceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetClientConnectorService(request);
}

future<StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
                    ClientConnectorService>>
ClientConnectorServicesServiceClient::CreateClientConnectorService(
    std::string const& parent,
    google::cloud::beyondcorp::clientconnectorservices::v1::
        ClientConnectorService const& client_connector_service,
    std::string const& client_connector_service_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::beyondcorp::clientconnectorservices::v1::
      CreateClientConnectorServiceRequest request;
  request.set_parent(parent);
  *request.mutable_client_connector_service() = client_connector_service;
  request.set_client_connector_service_id(client_connector_service_id);
  return connection_->CreateClientConnectorService(request);
}

future<StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
                    ClientConnectorService>>
ClientConnectorServicesServiceClient::CreateClientConnectorService(
    google::cloud::beyondcorp::clientconnectorservices::v1::
        CreateClientConnectorServiceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateClientConnectorService(request);
}

future<StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
                    ClientConnectorService>>
ClientConnectorServicesServiceClient::UpdateClientConnectorService(
    google::cloud::beyondcorp::clientconnectorservices::v1::
        ClientConnectorService const& client_connector_service,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::beyondcorp::clientconnectorservices::v1::
      UpdateClientConnectorServiceRequest request;
  *request.mutable_client_connector_service() = client_connector_service;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateClientConnectorService(request);
}

future<StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
                    ClientConnectorService>>
ClientConnectorServicesServiceClient::UpdateClientConnectorService(
    google::cloud::beyondcorp::clientconnectorservices::v1::
        UpdateClientConnectorServiceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateClientConnectorService(request);
}

future<StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
                    ClientConnectorServiceOperationMetadata>>
ClientConnectorServicesServiceClient::DeleteClientConnectorService(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::beyondcorp::clientconnectorservices::v1::
      DeleteClientConnectorServiceRequest request;
  request.set_name(name);
  return connection_->DeleteClientConnectorService(request);
}

future<StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
                    ClientConnectorServiceOperationMetadata>>
ClientConnectorServicesServiceClient::DeleteClientConnectorService(
    google::cloud::beyondcorp::clientconnectorservices::v1::
        DeleteClientConnectorServiceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteClientConnectorService(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp
}  // namespace cloud
}  // namespace google
