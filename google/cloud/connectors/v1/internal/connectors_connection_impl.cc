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
// source: google/cloud/connectors/v1/connectors_service.proto

#include "google/cloud/connectors/v1/internal/connectors_connection_impl.h"
#include "google/cloud/connectors/v1/internal/connectors_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace connectors_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<connectors_v1::ConnectorsRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<connectors_v1::ConnectorsRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<connectors_v1::ConnectorsBackoffPolicyOption>()->clone();
}

std::unique_ptr<connectors_v1::ConnectorsConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<connectors_v1::ConnectorsConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<connectors_v1::ConnectorsPollingPolicyOption>()->clone();
}

}  // namespace

ConnectorsConnectionImpl::ConnectorsConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<connectors_v1_internal::ConnectorsStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      ConnectorsConnection::options())) {}

StreamRange<google::cloud::connectors::v1::Connection>
ConnectorsConnectionImpl::ListConnections(
    google::cloud::connectors::v1::ListConnectionsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListConnections(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::connectors::v1::Connection>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<connectors_v1::ConnectorsRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::connectors::v1::ListConnectionsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::connectors::v1::ListConnectionsRequest const&
                       request) {
              return stub->ListConnections(context, request);
            },
            r, function_name);
      },
      [](google::cloud::connectors::v1::ListConnectionsResponse r) {
        std::vector<google::cloud::connectors::v1::Connection> result(
            r.connections().size());
        auto& messages = *r.mutable_connections();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::connectors::v1::Connection>
ConnectorsConnectionImpl::GetConnection(
    google::cloud::connectors::v1::GetConnectionRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetConnection(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::connectors::v1::GetConnectionRequest const& request) {
        return stub_->GetConnection(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::connectors::v1::Connection>>
ConnectorsConnectionImpl::CreateConnection(
    google::cloud::connectors::v1::CreateConnectionRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::connectors::v1::Connection>(
      background_->cq(), current, request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::connectors::v1::CreateConnectionRequest const&
              request) {
        return stub->AsyncCreateConnection(cq, std::move(context), options,
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
          google::cloud::connectors::v1::Connection>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateConnection(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::connectors::v1::Connection>>
ConnectorsConnectionImpl::UpdateConnection(
    google::cloud::connectors::v1::UpdateConnectionRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::connectors::v1::Connection>(
      background_->cq(), current, request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::connectors::v1::UpdateConnectionRequest const&
              request) {
        return stub->AsyncUpdateConnection(cq, std::move(context), options,
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
          google::cloud::connectors::v1::Connection>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateConnection(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::connectors::v1::OperationMetadata>>
ConnectorsConnectionImpl::DeleteConnection(
    google::cloud::connectors::v1::DeleteConnectionRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::connectors::v1::OperationMetadata>(
      background_->cq(), current, request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::connectors::v1::DeleteConnectionRequest const&
              request) {
        return stub->AsyncDeleteConnection(cq, std::move(context), options,
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
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::connectors::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteConnection(request),
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::connectors::v1::Provider>
ConnectorsConnectionImpl::ListProviders(
    google::cloud::connectors::v1::ListProvidersRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListProviders(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::connectors::v1::Provider>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<connectors_v1::ConnectorsRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::connectors::v1::ListProvidersRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::connectors::v1::ListProvidersRequest const&
                       request) {
              return stub->ListProviders(context, request);
            },
            r, function_name);
      },
      [](google::cloud::connectors::v1::ListProvidersResponse r) {
        std::vector<google::cloud::connectors::v1::Provider> result(
            r.providers().size());
        auto& messages = *r.mutable_providers();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::connectors::v1::Provider>
ConnectorsConnectionImpl::GetProvider(
    google::cloud::connectors::v1::GetProviderRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetProvider(request),
      [this](grpc::ClientContext& context,
             google::cloud::connectors::v1::GetProviderRequest const& request) {
        return stub_->GetProvider(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::connectors::v1::Connector>
ConnectorsConnectionImpl::ListConnectors(
    google::cloud::connectors::v1::ListConnectorsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListConnectors(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::connectors::v1::Connector>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<connectors_v1::ConnectorsRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::connectors::v1::ListConnectorsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::connectors::v1::ListConnectorsRequest const&
                       request) {
              return stub->ListConnectors(context, request);
            },
            r, function_name);
      },
      [](google::cloud::connectors::v1::ListConnectorsResponse r) {
        std::vector<google::cloud::connectors::v1::Connector> result(
            r.connectors().size());
        auto& messages = *r.mutable_connectors();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::connectors::v1::Connector>
ConnectorsConnectionImpl::GetConnector(
    google::cloud::connectors::v1::GetConnectorRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetConnector(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::connectors::v1::GetConnectorRequest const& request) {
        return stub_->GetConnector(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::connectors::v1::ConnectorVersion>
ConnectorsConnectionImpl::ListConnectorVersions(
    google::cloud::connectors::v1::ListConnectorVersionsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListConnectorVersions(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::connectors::v1::ConnectorVersion>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<connectors_v1::ConnectorsRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::connectors::v1::ListConnectorVersionsRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::connectors::v1::
                       ListConnectorVersionsRequest const& request) {
              return stub->ListConnectorVersions(context, request);
            },
            r, function_name);
      },
      [](google::cloud::connectors::v1::ListConnectorVersionsResponse r) {
        std::vector<google::cloud::connectors::v1::ConnectorVersion> result(
            r.connector_versions().size());
        auto& messages = *r.mutable_connector_versions();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::connectors::v1::ConnectorVersion>
ConnectorsConnectionImpl::GetConnectorVersion(
    google::cloud::connectors::v1::GetConnectorVersionRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetConnectorVersion(request),
      [this](grpc::ClientContext& context,
             google::cloud::connectors::v1::GetConnectorVersionRequest const&
                 request) {
        return stub_->GetConnectorVersion(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::connectors::v1::ConnectionSchemaMetadata>
ConnectorsConnectionImpl::GetConnectionSchemaMetadata(
    google::cloud::connectors::v1::GetConnectionSchemaMetadataRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetConnectionSchemaMetadata(request),
      [this](grpc::ClientContext& context,
             google::cloud::connectors::v1::
                 GetConnectionSchemaMetadataRequest const& request) {
        return stub_->GetConnectionSchemaMetadata(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::connectors::v1::ConnectionSchemaMetadata>>
ConnectorsConnectionImpl::RefreshConnectionSchemaMetadata(
    google::cloud::connectors::v1::RefreshConnectionSchemaMetadataRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::connectors::v1::ConnectionSchemaMetadata>(
      background_->cq(), current, request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::connectors::v1::
              RefreshConnectionSchemaMetadataRequest const& request) {
        return stub->AsyncRefreshConnectionSchemaMetadata(
            cq, std::move(context), options, request);
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
          google::cloud::connectors::v1::ConnectionSchemaMetadata>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->RefreshConnectionSchemaMetadata(request),
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::connectors::v1::RuntimeEntitySchema>
ConnectorsConnectionImpl::ListRuntimeEntitySchemas(
    google::cloud::connectors::v1::ListRuntimeEntitySchemasRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListRuntimeEntitySchemas(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::connectors::v1::RuntimeEntitySchema>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<connectors_v1::ConnectorsRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::connectors::v1::ListRuntimeEntitySchemasRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::connectors::v1::
                       ListRuntimeEntitySchemasRequest const& request) {
              return stub->ListRuntimeEntitySchemas(context, request);
            },
            r, function_name);
      },
      [](google::cloud::connectors::v1::ListRuntimeEntitySchemasResponse r) {
        std::vector<google::cloud::connectors::v1::RuntimeEntitySchema> result(
            r.runtime_entity_schemas().size());
        auto& messages = *r.mutable_runtime_entity_schemas();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StreamRange<google::cloud::connectors::v1::RuntimeActionSchema>
ConnectorsConnectionImpl::ListRuntimeActionSchemas(
    google::cloud::connectors::v1::ListRuntimeActionSchemasRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListRuntimeActionSchemas(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::connectors::v1::RuntimeActionSchema>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<connectors_v1::ConnectorsRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::connectors::v1::ListRuntimeActionSchemasRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::connectors::v1::
                       ListRuntimeActionSchemasRequest const& request) {
              return stub->ListRuntimeActionSchemas(context, request);
            },
            r, function_name);
      },
      [](google::cloud::connectors::v1::ListRuntimeActionSchemasResponse r) {
        std::vector<google::cloud::connectors::v1::RuntimeActionSchema> result(
            r.runtime_action_schemas().size());
        auto& messages = *r.mutable_runtime_action_schemas();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::connectors::v1::RuntimeConfig>
ConnectorsConnectionImpl::GetRuntimeConfig(
    google::cloud::connectors::v1::GetRuntimeConfigRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetRuntimeConfig(request),
      [this](grpc::ClientContext& context,
             google::cloud::connectors::v1::GetRuntimeConfigRequest const&
                 request) { return stub_->GetRuntimeConfig(context, request); },
      request, __func__);
}

StatusOr<google::cloud::connectors::v1::Settings>
ConnectorsConnectionImpl::GetGlobalSettings(
    google::cloud::connectors::v1::GetGlobalSettingsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetGlobalSettings(request),
      [this](grpc::ClientContext& context,
             google::cloud::connectors::v1::GetGlobalSettingsRequest const&
                 request) {
        return stub_->GetGlobalSettings(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace connectors_v1_internal
}  // namespace cloud
}  // namespace google
