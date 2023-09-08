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
// source: google/cloud/bigquery/biglake/v1/metastore.proto

#include "google/cloud/bigquery/biglake/v1/internal/metastore_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/bigquery/biglake/v1/metastore.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace bigquery_biglake_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

MetastoreServiceMetadata::MetastoreServiceMetadata(
    std::shared_ptr<MetastoreServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::bigquery::biglake::v1::Catalog>
MetastoreServiceMetadata::CreateCatalog(
    grpc::ClientContext& context,
    google::cloud::bigquery::biglake::v1::CreateCatalogRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateCatalog(context, request);
}

StatusOr<google::cloud::bigquery::biglake::v1::Catalog>
MetastoreServiceMetadata::DeleteCatalog(
    grpc::ClientContext& context,
    google::cloud::bigquery::biglake::v1::DeleteCatalogRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteCatalog(context, request);
}

StatusOr<google::cloud::bigquery::biglake::v1::Catalog>
MetastoreServiceMetadata::GetCatalog(
    grpc::ClientContext& context,
    google::cloud::bigquery::biglake::v1::GetCatalogRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetCatalog(context, request);
}

StatusOr<google::cloud::bigquery::biglake::v1::ListCatalogsResponse>
MetastoreServiceMetadata::ListCatalogs(
    grpc::ClientContext& context,
    google::cloud::bigquery::biglake::v1::ListCatalogsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListCatalogs(context, request);
}

StatusOr<google::cloud::bigquery::biglake::v1::Database>
MetastoreServiceMetadata::CreateDatabase(
    grpc::ClientContext& context,
    google::cloud::bigquery::biglake::v1::CreateDatabaseRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateDatabase(context, request);
}

StatusOr<google::cloud::bigquery::biglake::v1::Database>
MetastoreServiceMetadata::DeleteDatabase(
    grpc::ClientContext& context,
    google::cloud::bigquery::biglake::v1::DeleteDatabaseRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteDatabase(context, request);
}

StatusOr<google::cloud::bigquery::biglake::v1::Database>
MetastoreServiceMetadata::UpdateDatabase(
    grpc::ClientContext& context,
    google::cloud::bigquery::biglake::v1::UpdateDatabaseRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("database.name=",
                           internal::UrlEncode(request.database().name())));
  return child_->UpdateDatabase(context, request);
}

StatusOr<google::cloud::bigquery::biglake::v1::Database>
MetastoreServiceMetadata::GetDatabase(
    grpc::ClientContext& context,
    google::cloud::bigquery::biglake::v1::GetDatabaseRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetDatabase(context, request);
}

StatusOr<google::cloud::bigquery::biglake::v1::ListDatabasesResponse>
MetastoreServiceMetadata::ListDatabases(
    grpc::ClientContext& context,
    google::cloud::bigquery::biglake::v1::ListDatabasesRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListDatabases(context, request);
}

StatusOr<google::cloud::bigquery::biglake::v1::Table>
MetastoreServiceMetadata::CreateTable(
    grpc::ClientContext& context,
    google::cloud::bigquery::biglake::v1::CreateTableRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateTable(context, request);
}

StatusOr<google::cloud::bigquery::biglake::v1::Table>
MetastoreServiceMetadata::DeleteTable(
    grpc::ClientContext& context,
    google::cloud::bigquery::biglake::v1::DeleteTableRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteTable(context, request);
}

StatusOr<google::cloud::bigquery::biglake::v1::Table>
MetastoreServiceMetadata::UpdateTable(
    grpc::ClientContext& context,
    google::cloud::bigquery::biglake::v1::UpdateTableRequest const& request) {
  SetMetadata(
      context,
      absl::StrCat("table.name=", internal::UrlEncode(request.table().name())));
  return child_->UpdateTable(context, request);
}

StatusOr<google::cloud::bigquery::biglake::v1::Table>
MetastoreServiceMetadata::RenameTable(
    grpc::ClientContext& context,
    google::cloud::bigquery::biglake::v1::RenameTableRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->RenameTable(context, request);
}

StatusOr<google::cloud::bigquery::biglake::v1::Table>
MetastoreServiceMetadata::GetTable(
    grpc::ClientContext& context,
    google::cloud::bigquery::biglake::v1::GetTableRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetTable(context, request);
}

StatusOr<google::cloud::bigquery::biglake::v1::ListTablesResponse>
MetastoreServiceMetadata::ListTables(
    grpc::ClientContext& context,
    google::cloud::bigquery::biglake::v1::ListTablesRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListTables(context, request);
}

void MetastoreServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                           std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void MetastoreServiceMetadata::SetMetadata(grpc::ClientContext& context) {
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
}  // namespace bigquery_biglake_v1_internal
}  // namespace cloud
}  // namespace google
