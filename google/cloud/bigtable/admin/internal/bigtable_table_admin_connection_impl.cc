// Copyright 2021 Google LLC
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
// source: google/bigtable/admin/v2/bigtable_table_admin.proto

#include "google/cloud/bigtable/admin/internal/bigtable_table_admin_connection_impl.h"
#include "google/cloud/bigtable/admin/internal/bigtable_table_admin_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/async_retry_loop.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigtable_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BigtableTableAdminConnectionImpl::BigtableTableAdminConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<bigtable_admin_internal::BigtableTableAdminStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), BigtableTableAdminConnection::options())) {}

StatusOr<google::bigtable::admin::v2::Table>
BigtableTableAdminConnectionImpl::CreateTable(
    google::bigtable::admin::v2::CreateTableRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateTable(request),
      [this](grpc::ClientContext& context,
             google::bigtable::admin::v2::CreateTableRequest const& request) {
        return stub_->CreateTable(context, request);
      },
      request, __func__);
}

StreamRange<google::bigtable::admin::v2::Table>
BigtableTableAdminConnectionImpl::ListTables(
    google::bigtable::admin::v2::ListTablesRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry =
      std::shared_ptr<bigtable_admin::BigtableTableAdminRetryPolicy const>(
          retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListTables(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::bigtable::admin::v2::Table>>(
      std::move(request),
      [stub, retry, backoff, idempotency,
       function_name](google::bigtable::admin::v2::ListTablesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::bigtable::admin::v2::ListTablesRequest const& request) {
              return stub->ListTables(context, request);
            },
            r, function_name);
      },
      [](google::bigtable::admin::v2::ListTablesResponse r) {
        std::vector<google::bigtable::admin::v2::Table> result(
            r.tables().size());
        auto& messages = *r.mutable_tables();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::bigtable::admin::v2::Table>
BigtableTableAdminConnectionImpl::GetTable(
    google::bigtable::admin::v2::GetTableRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(), idempotency_policy()->GetTable(request),
      [this](grpc::ClientContext& context,
             google::bigtable::admin::v2::GetTableRequest const& request) {
        return stub_->GetTable(context, request);
      },
      request, __func__);
}

Status BigtableTableAdminConnectionImpl::DeleteTable(
    google::bigtable::admin::v2::DeleteTableRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteTable(request),
      [this](grpc::ClientContext& context,
             google::bigtable::admin::v2::DeleteTableRequest const& request) {
        return stub_->DeleteTable(context, request);
      },
      request, __func__);
}

future<StatusOr<google::bigtable::admin::v2::Table>>
BigtableTableAdminConnectionImpl::UndeleteTable(
    google::bigtable::admin::v2::UndeleteTableRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::bigtable::admin::v2::Table>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::bigtable::admin::v2::UndeleteTableRequest const& request) {
        return stub->AsyncUndeleteTable(cq, std::move(context), request);
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
          google::bigtable::admin::v2::Table>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->UndeleteTable(request), polling_policy(), __func__);
}

StatusOr<google::bigtable::admin::v2::Table>
BigtableTableAdminConnectionImpl::ModifyColumnFamilies(
    google::bigtable::admin::v2::ModifyColumnFamiliesRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->ModifyColumnFamilies(request),
      [this](grpc::ClientContext& context,
             google::bigtable::admin::v2::ModifyColumnFamiliesRequest const&
                 request) {
        return stub_->ModifyColumnFamilies(context, request);
      },
      request, __func__);
}

Status BigtableTableAdminConnectionImpl::DropRowRange(
    google::bigtable::admin::v2::DropRowRangeRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->DropRowRange(request),
      [this](grpc::ClientContext& context,
             google::bigtable::admin::v2::DropRowRangeRequest const& request) {
        return stub_->DropRowRange(context, request);
      },
      request, __func__);
}

StatusOr<google::bigtable::admin::v2::GenerateConsistencyTokenResponse>
BigtableTableAdminConnectionImpl::GenerateConsistencyToken(
    google::bigtable::admin::v2::GenerateConsistencyTokenRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GenerateConsistencyToken(request),
      [this](grpc::ClientContext& context,
             google::bigtable::admin::v2::GenerateConsistencyTokenRequest const&
                 request) {
        return stub_->GenerateConsistencyToken(context, request);
      },
      request, __func__);
}

StatusOr<google::bigtable::admin::v2::CheckConsistencyResponse>
BigtableTableAdminConnectionImpl::CheckConsistency(
    google::bigtable::admin::v2::CheckConsistencyRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CheckConsistency(request),
      [this](
          grpc::ClientContext& context,
          google::bigtable::admin::v2::CheckConsistencyRequest const& request) {
        return stub_->CheckConsistency(context, request);
      },
      request, __func__);
}

future<StatusOr<google::bigtable::admin::v2::Backup>>
BigtableTableAdminConnectionImpl::CreateBackup(
    google::bigtable::admin::v2::CreateBackupRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::bigtable::admin::v2::Backup>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::bigtable::admin::v2::CreateBackupRequest const& request) {
        return stub->AsyncCreateBackup(cq, std::move(context), request);
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
          google::bigtable::admin::v2::Backup>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateBackup(request), polling_policy(), __func__);
}

StatusOr<google::bigtable::admin::v2::Backup>
BigtableTableAdminConnectionImpl::GetBackup(
    google::bigtable::admin::v2::GetBackupRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetBackup(request),
      [this](grpc::ClientContext& context,
             google::bigtable::admin::v2::GetBackupRequest const& request) {
        return stub_->GetBackup(context, request);
      },
      request, __func__);
}

StatusOr<google::bigtable::admin::v2::Backup>
BigtableTableAdminConnectionImpl::UpdateBackup(
    google::bigtable::admin::v2::UpdateBackupRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateBackup(request),
      [this](grpc::ClientContext& context,
             google::bigtable::admin::v2::UpdateBackupRequest const& request) {
        return stub_->UpdateBackup(context, request);
      },
      request, __func__);
}

Status BigtableTableAdminConnectionImpl::DeleteBackup(
    google::bigtable::admin::v2::DeleteBackupRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteBackup(request),
      [this](grpc::ClientContext& context,
             google::bigtable::admin::v2::DeleteBackupRequest const& request) {
        return stub_->DeleteBackup(context, request);
      },
      request, __func__);
}

StreamRange<google::bigtable::admin::v2::Backup>
BigtableTableAdminConnectionImpl::ListBackups(
    google::bigtable::admin::v2::ListBackupsRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry =
      std::shared_ptr<bigtable_admin::BigtableTableAdminRetryPolicy const>(
          retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListBackups(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::bigtable::admin::v2::Backup>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::bigtable::admin::v2::ListBackupsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::bigtable::admin::v2::ListBackupsRequest const&
                       request) { return stub->ListBackups(context, request); },
            r, function_name);
      },
      [](google::bigtable::admin::v2::ListBackupsResponse r) {
        std::vector<google::bigtable::admin::v2::Backup> result(
            r.backups().size());
        auto& messages = *r.mutable_backups();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::bigtable::admin::v2::Table>>
BigtableTableAdminConnectionImpl::RestoreTable(
    google::bigtable::admin::v2::RestoreTableRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::bigtable::admin::v2::Table>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::bigtable::admin::v2::RestoreTableRequest const& request) {
        return stub->AsyncRestoreTable(cq, std::move(context), request);
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
          google::bigtable::admin::v2::Table>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->RestoreTable(request), polling_policy(), __func__);
}

StatusOr<google::iam::v1::Policy>
BigtableTableAdminConnectionImpl::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetIamPolicy(request),
      [this](grpc::ClientContext& context,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return stub_->GetIamPolicy(context, request);
      },
      request, __func__);
}

StatusOr<google::iam::v1::Policy>
BigtableTableAdminConnectionImpl::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->SetIamPolicy(request),
      [this](grpc::ClientContext& context,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return stub_->SetIamPolicy(context, request);
      },
      request, __func__);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
BigtableTableAdminConnectionImpl::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->TestIamPermissions(request),
      [this](grpc::ClientContext& context,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return stub_->TestIamPermissions(context, request);
      },
      request, __func__);
}

future<StatusOr<google::bigtable::admin::v2::CheckConsistencyResponse>>
BigtableTableAdminConnectionImpl::AsyncCheckConsistency(
    google::bigtable::admin::v2::CheckConsistencyRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CheckConsistency(request), background_->cq(),
      [stub](
          CompletionQueue& cq, std::unique_ptr<grpc::ClientContext> context,
          google::bigtable::admin::v2::CheckConsistencyRequest const& request) {
        return stub->AsyncCheckConsistency(cq, std::move(context), request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigtable_admin_internal
}  // namespace cloud
}  // namespace google
