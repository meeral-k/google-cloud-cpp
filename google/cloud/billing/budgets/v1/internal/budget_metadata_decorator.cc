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
// source: google/cloud/billing/budgets/v1/budget_service.proto

#include "google/cloud/billing/budgets/v1/internal/budget_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/billing/budgets/v1/budget_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace billing_budgets_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BudgetServiceMetadata::BudgetServiceMetadata(
    std::shared_ptr<BudgetServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::billing::budgets::v1::Budget>
BudgetServiceMetadata::CreateBudget(
    grpc::ClientContext& context,
    google::cloud::billing::budgets::v1::CreateBudgetRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateBudget(context, request);
}

StatusOr<google::cloud::billing::budgets::v1::Budget>
BudgetServiceMetadata::UpdateBudget(
    grpc::ClientContext& context,
    google::cloud::billing::budgets::v1::UpdateBudgetRequest const& request) {
  SetMetadata(context,
              absl::StrCat("budget.name=",
                           internal::UrlEncode(request.budget().name())));
  return child_->UpdateBudget(context, request);
}

StatusOr<google::cloud::billing::budgets::v1::Budget>
BudgetServiceMetadata::GetBudget(
    grpc::ClientContext& context,
    google::cloud::billing::budgets::v1::GetBudgetRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetBudget(context, request);
}

StatusOr<google::cloud::billing::budgets::v1::ListBudgetsResponse>
BudgetServiceMetadata::ListBudgets(
    grpc::ClientContext& context,
    google::cloud::billing::budgets::v1::ListBudgetsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListBudgets(context, request);
}

Status BudgetServiceMetadata::DeleteBudget(
    grpc::ClientContext& context,
    google::cloud::billing::budgets::v1::DeleteBudgetRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteBudget(context, request);
}

void BudgetServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                        std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void BudgetServiceMetadata::SetMetadata(grpc::ClientContext& context) {
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
}  // namespace billing_budgets_v1_internal
}  // namespace cloud
}  // namespace google
