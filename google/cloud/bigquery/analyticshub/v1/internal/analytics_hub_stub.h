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
// source: google/cloud/bigquery/analyticshub/v1/analyticshub.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_ANALYTICSHUB_V1_INTERNAL_ANALYTICS_HUB_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_ANALYTICSHUB_V1_INTERNAL_ANALYTICS_HUB_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/bigquery/analyticshub/v1/analyticshub.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_analyticshub_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AnalyticsHubServiceStub {
 public:
  virtual ~AnalyticsHubServiceStub() = 0;

  virtual StatusOr<
      google::cloud::bigquery::analyticshub::v1::ListDataExchangesResponse>
  ListDataExchanges(
      grpc::ClientContext& context,
      google::cloud::bigquery::analyticshub::v1::ListDataExchangesRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::bigquery::analyticshub::v1::ListOrgDataExchangesResponse>
  ListOrgDataExchanges(grpc::ClientContext& context,
                       google::cloud::bigquery::analyticshub::v1::
                           ListOrgDataExchangesRequest const& request) = 0;

  virtual StatusOr<google::cloud::bigquery::analyticshub::v1::DataExchange>
  GetDataExchange(
      grpc::ClientContext& context,
      google::cloud::bigquery::analyticshub::v1::GetDataExchangeRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::bigquery::analyticshub::v1::DataExchange>
  CreateDataExchange(grpc::ClientContext& context,
                     google::cloud::bigquery::analyticshub::v1::
                         CreateDataExchangeRequest const& request) = 0;

  virtual StatusOr<google::cloud::bigquery::analyticshub::v1::DataExchange>
  UpdateDataExchange(grpc::ClientContext& context,
                     google::cloud::bigquery::analyticshub::v1::
                         UpdateDataExchangeRequest const& request) = 0;

  virtual Status DeleteDataExchange(
      grpc::ClientContext& context,
      google::cloud::bigquery::analyticshub::v1::
          DeleteDataExchangeRequest const& request) = 0;

  virtual StatusOr<
      google::cloud::bigquery::analyticshub::v1::ListListingsResponse>
  ListListings(
      grpc::ClientContext& context,
      google::cloud::bigquery::analyticshub::v1::ListListingsRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::bigquery::analyticshub::v1::Listing>
  GetListing(grpc::ClientContext& context,
             google::cloud::bigquery::analyticshub::v1::GetListingRequest const&
                 request) = 0;

  virtual StatusOr<google::cloud::bigquery::analyticshub::v1::Listing>
  CreateListing(
      grpc::ClientContext& context,
      google::cloud::bigquery::analyticshub::v1::CreateListingRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::bigquery::analyticshub::v1::Listing>
  UpdateListing(
      grpc::ClientContext& context,
      google::cloud::bigquery::analyticshub::v1::UpdateListingRequest const&
          request) = 0;

  virtual Status DeleteListing(
      grpc::ClientContext& context,
      google::cloud::bigquery::analyticshub::v1::DeleteListingRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::bigquery::analyticshub::v1::SubscribeListingResponse>
  SubscribeListing(
      grpc::ClientContext& context,
      google::cloud::bigquery::analyticshub::v1::SubscribeListingRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncSubscribeDataExchange(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::bigquery::analyticshub::v1::
          SubscribeDataExchangeRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncRefreshSubscription(google::cloud::CompletionQueue& cq,
                           std::shared_ptr<grpc::ClientContext> context,
                           Options const& options,
                           google::cloud::bigquery::analyticshub::v1::
                               RefreshSubscriptionRequest const& request) = 0;

  virtual StatusOr<google::cloud::bigquery::analyticshub::v1::Subscription>
  GetSubscription(
      grpc::ClientContext& context,
      google::cloud::bigquery::analyticshub::v1::GetSubscriptionRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::bigquery::analyticshub::v1::ListSubscriptionsResponse>
  ListSubscriptions(
      grpc::ClientContext& context,
      google::cloud::bigquery::analyticshub::v1::ListSubscriptionsRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::bigquery::analyticshub::v1::
                       ListSharedResourceSubscriptionsResponse>
  ListSharedResourceSubscriptions(
      grpc::ClientContext& context,
      google::cloud::bigquery::analyticshub::v1::
          ListSharedResourceSubscriptionsRequest const& request) = 0;

  virtual StatusOr<
      google::cloud::bigquery::analyticshub::v1::RevokeSubscriptionResponse>
  RevokeSubscription(grpc::ClientContext& context,
                     google::cloud::bigquery::analyticshub::v1::
                         RevokeSubscriptionRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteSubscription(google::cloud::CompletionQueue& cq,
                          std::shared_ptr<grpc::ClientContext> context,
                          Options const& options,
                          google::cloud::bigquery::analyticshub::v1::
                              DeleteSubscriptionRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context,
      google::iam::v1::GetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context,
      google::iam::v1::SetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(
      grpc::ClientContext& context,
      google::iam::v1::TestIamPermissionsRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultAnalyticsHubServiceStub : public AnalyticsHubServiceStub {
 public:
  DefaultAnalyticsHubServiceStub(
      std::unique_ptr<google::cloud::bigquery::analyticshub::v1::
                          AnalyticsHubService::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)), operations_(std::move(operations)) {}

  StatusOr<google::cloud::bigquery::analyticshub::v1::ListDataExchangesResponse>
  ListDataExchanges(
      grpc::ClientContext& client_context,
      google::cloud::bigquery::analyticshub::v1::ListDataExchangesRequest const&
          request) override;

  StatusOr<
      google::cloud::bigquery::analyticshub::v1::ListOrgDataExchangesResponse>
  ListOrgDataExchanges(grpc::ClientContext& client_context,
                       google::cloud::bigquery::analyticshub::v1::
                           ListOrgDataExchangesRequest const& request) override;

  StatusOr<google::cloud::bigquery::analyticshub::v1::DataExchange>
  GetDataExchange(
      grpc::ClientContext& client_context,
      google::cloud::bigquery::analyticshub::v1::GetDataExchangeRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::analyticshub::v1::DataExchange>
  CreateDataExchange(grpc::ClientContext& client_context,
                     google::cloud::bigquery::analyticshub::v1::
                         CreateDataExchangeRequest const& request) override;

  StatusOr<google::cloud::bigquery::analyticshub::v1::DataExchange>
  UpdateDataExchange(grpc::ClientContext& client_context,
                     google::cloud::bigquery::analyticshub::v1::
                         UpdateDataExchangeRequest const& request) override;

  Status DeleteDataExchange(
      grpc::ClientContext& client_context,
      google::cloud::bigquery::analyticshub::v1::
          DeleteDataExchangeRequest const& request) override;

  StatusOr<google::cloud::bigquery::analyticshub::v1::ListListingsResponse>
  ListListings(
      grpc::ClientContext& client_context,
      google::cloud::bigquery::analyticshub::v1::ListListingsRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::analyticshub::v1::Listing> GetListing(
      grpc::ClientContext& client_context,
      google::cloud::bigquery::analyticshub::v1::GetListingRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::analyticshub::v1::Listing> CreateListing(
      grpc::ClientContext& client_context,
      google::cloud::bigquery::analyticshub::v1::CreateListingRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::analyticshub::v1::Listing> UpdateListing(
      grpc::ClientContext& client_context,
      google::cloud::bigquery::analyticshub::v1::UpdateListingRequest const&
          request) override;

  Status DeleteListing(
      grpc::ClientContext& client_context,
      google::cloud::bigquery::analyticshub::v1::DeleteListingRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::analyticshub::v1::SubscribeListingResponse>
  SubscribeListing(
      grpc::ClientContext& client_context,
      google::cloud::bigquery::analyticshub::v1::SubscribeListingRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncSubscribeDataExchange(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::bigquery::analyticshub::v1::
          SubscribeDataExchangeRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncRefreshSubscription(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::bigquery::analyticshub::v1::
          RefreshSubscriptionRequest const& request) override;

  StatusOr<google::cloud::bigquery::analyticshub::v1::Subscription>
  GetSubscription(
      grpc::ClientContext& client_context,
      google::cloud::bigquery::analyticshub::v1::GetSubscriptionRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::analyticshub::v1::ListSubscriptionsResponse>
  ListSubscriptions(
      grpc::ClientContext& client_context,
      google::cloud::bigquery::analyticshub::v1::ListSubscriptionsRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::analyticshub::v1::
               ListSharedResourceSubscriptionsResponse>
  ListSharedResourceSubscriptions(
      grpc::ClientContext& client_context,
      google::cloud::bigquery::analyticshub::v1::
          ListSharedResourceSubscriptionsRequest const& request) override;

  StatusOr<
      google::cloud::bigquery::analyticshub::v1::RevokeSubscriptionResponse>
  RevokeSubscription(grpc::ClientContext& client_context,
                     google::cloud::bigquery::analyticshub::v1::
                         RevokeSubscriptionRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteSubscription(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::bigquery::analyticshub::v1::
          DeleteSubscriptionRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& client_context,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& client_context,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& client_context,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::bigquery::analyticshub::v1::
                      AnalyticsHubService::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_analyticshub_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_ANALYTICSHUB_V1_INTERNAL_ANALYTICS_HUB_STUB_H
