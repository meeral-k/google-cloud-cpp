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
// source: google/cloud/channel/v1/service.proto

#include "google/cloud/channel/v1/internal/cloud_channel_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/channel/v1/service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace channel_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudChannelServiceStub::~CloudChannelServiceStub() = default;

StatusOr<google::cloud::channel::v1::ListCustomersResponse>
DefaultCloudChannelServiceStub::ListCustomers(
    grpc::ClientContext& client_context,
    google::cloud::channel::v1::ListCustomersRequest const& request) {
  google::cloud::channel::v1::ListCustomersResponse response;
  auto status = grpc_stub_->ListCustomers(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::channel::v1::Customer>
DefaultCloudChannelServiceStub::GetCustomer(
    grpc::ClientContext& client_context,
    google::cloud::channel::v1::GetCustomerRequest const& request) {
  google::cloud::channel::v1::Customer response;
  auto status = grpc_stub_->GetCustomer(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::channel::v1::CheckCloudIdentityAccountsExistResponse>
DefaultCloudChannelServiceStub::CheckCloudIdentityAccountsExist(
    grpc::ClientContext& client_context,
    google::cloud::channel::v1::CheckCloudIdentityAccountsExistRequest const&
        request) {
  google::cloud::channel::v1::CheckCloudIdentityAccountsExistResponse response;
  auto status = grpc_stub_->CheckCloudIdentityAccountsExist(&client_context,
                                                            request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::channel::v1::Customer>
DefaultCloudChannelServiceStub::CreateCustomer(
    grpc::ClientContext& client_context,
    google::cloud::channel::v1::CreateCustomerRequest const& request) {
  google::cloud::channel::v1::Customer response;
  auto status = grpc_stub_->CreateCustomer(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::channel::v1::Customer>
DefaultCloudChannelServiceStub::UpdateCustomer(
    grpc::ClientContext& client_context,
    google::cloud::channel::v1::UpdateCustomerRequest const& request) {
  google::cloud::channel::v1::Customer response;
  auto status = grpc_stub_->UpdateCustomer(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultCloudChannelServiceStub::DeleteCustomer(
    grpc::ClientContext& client_context,
    google::cloud::channel::v1::DeleteCustomerRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteCustomer(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::channel::v1::Customer>
DefaultCloudChannelServiceStub::ImportCustomer(
    grpc::ClientContext& client_context,
    google::cloud::channel::v1::ImportCustomerRequest const& request) {
  google::cloud::channel::v1::Customer response;
  auto status = grpc_stub_->ImportCustomer(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCloudChannelServiceStub::AsyncProvisionCloudIdentity(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::channel::v1::ProvisionCloudIdentityRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::channel::v1::ProvisionCloudIdentityRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::channel::v1::ProvisionCloudIdentityRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncProvisionCloudIdentity(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::channel::v1::ListEntitlementsResponse>
DefaultCloudChannelServiceStub::ListEntitlements(
    grpc::ClientContext& client_context,
    google::cloud::channel::v1::ListEntitlementsRequest const& request) {
  google::cloud::channel::v1::ListEntitlementsResponse response;
  auto status =
      grpc_stub_->ListEntitlements(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::channel::v1::ListTransferableSkusResponse>
DefaultCloudChannelServiceStub::ListTransferableSkus(
    grpc::ClientContext& client_context,
    google::cloud::channel::v1::ListTransferableSkusRequest const& request) {
  google::cloud::channel::v1::ListTransferableSkusResponse response;
  auto status =
      grpc_stub_->ListTransferableSkus(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::channel::v1::ListTransferableOffersResponse>
DefaultCloudChannelServiceStub::ListTransferableOffers(
    grpc::ClientContext& client_context,
    google::cloud::channel::v1::ListTransferableOffersRequest const& request) {
  google::cloud::channel::v1::ListTransferableOffersResponse response;
  auto status =
      grpc_stub_->ListTransferableOffers(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::channel::v1::Entitlement>
DefaultCloudChannelServiceStub::GetEntitlement(
    grpc::ClientContext& client_context,
    google::cloud::channel::v1::GetEntitlementRequest const& request) {
  google::cloud::channel::v1::Entitlement response;
  auto status = grpc_stub_->GetEntitlement(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCloudChannelServiceStub::AsyncCreateEntitlement(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::channel::v1::CreateEntitlementRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::channel::v1::CreateEntitlementRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::channel::v1::CreateEntitlementRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateEntitlement(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultCloudChannelServiceStub::AsyncChangeParameters(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::channel::v1::ChangeParametersRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::channel::v1::ChangeParametersRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::channel::v1::ChangeParametersRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncChangeParameters(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultCloudChannelServiceStub::AsyncChangeRenewalSettings(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::channel::v1::ChangeRenewalSettingsRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::channel::v1::ChangeRenewalSettingsRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::channel::v1::ChangeRenewalSettingsRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncChangeRenewalSettings(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultCloudChannelServiceStub::AsyncChangeOffer(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::channel::v1::ChangeOfferRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::channel::v1::ChangeOfferRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::channel::v1::ChangeOfferRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncChangeOffer(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultCloudChannelServiceStub::AsyncStartPaidService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::channel::v1::StartPaidServiceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::channel::v1::StartPaidServiceRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::channel::v1::StartPaidServiceRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncStartPaidService(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultCloudChannelServiceStub::AsyncSuspendEntitlement(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::channel::v1::SuspendEntitlementRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::channel::v1::SuspendEntitlementRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::channel::v1::SuspendEntitlementRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncSuspendEntitlement(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultCloudChannelServiceStub::AsyncCancelEntitlement(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::channel::v1::CancelEntitlementRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::channel::v1::CancelEntitlementRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::channel::v1::CancelEntitlementRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCancelEntitlement(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultCloudChannelServiceStub::AsyncActivateEntitlement(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::channel::v1::ActivateEntitlementRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::channel::v1::ActivateEntitlementRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::channel::v1::ActivateEntitlementRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncActivateEntitlement(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultCloudChannelServiceStub::AsyncTransferEntitlements(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::channel::v1::TransferEntitlementsRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::channel::v1::TransferEntitlementsRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::channel::v1::TransferEntitlementsRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncTransferEntitlements(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultCloudChannelServiceStub::AsyncTransferEntitlementsToGoogle(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::channel::v1::TransferEntitlementsToGoogleRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::channel::v1::TransferEntitlementsToGoogleRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::channel::v1::TransferEntitlementsToGoogleRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncTransferEntitlementsToGoogle(context, request,
                                                             cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::channel::v1::ListChannelPartnerLinksResponse>
DefaultCloudChannelServiceStub::ListChannelPartnerLinks(
    grpc::ClientContext& client_context,
    google::cloud::channel::v1::ListChannelPartnerLinksRequest const& request) {
  google::cloud::channel::v1::ListChannelPartnerLinksResponse response;
  auto status =
      grpc_stub_->ListChannelPartnerLinks(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::channel::v1::ChannelPartnerLink>
DefaultCloudChannelServiceStub::GetChannelPartnerLink(
    grpc::ClientContext& client_context,
    google::cloud::channel::v1::GetChannelPartnerLinkRequest const& request) {
  google::cloud::channel::v1::ChannelPartnerLink response;
  auto status =
      grpc_stub_->GetChannelPartnerLink(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::channel::v1::ChannelPartnerLink>
DefaultCloudChannelServiceStub::CreateChannelPartnerLink(
    grpc::ClientContext& client_context,
    google::cloud::channel::v1::CreateChannelPartnerLinkRequest const&
        request) {
  google::cloud::channel::v1::ChannelPartnerLink response;
  auto status =
      grpc_stub_->CreateChannelPartnerLink(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::channel::v1::ChannelPartnerLink>
DefaultCloudChannelServiceStub::UpdateChannelPartnerLink(
    grpc::ClientContext& client_context,
    google::cloud::channel::v1::UpdateChannelPartnerLinkRequest const&
        request) {
  google::cloud::channel::v1::ChannelPartnerLink response;
  auto status =
      grpc_stub_->UpdateChannelPartnerLink(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::channel::v1::CustomerRepricingConfig>
DefaultCloudChannelServiceStub::GetCustomerRepricingConfig(
    grpc::ClientContext& client_context,
    google::cloud::channel::v1::GetCustomerRepricingConfigRequest const&
        request) {
  google::cloud::channel::v1::CustomerRepricingConfig response;
  auto status = grpc_stub_->GetCustomerRepricingConfig(&client_context, request,
                                                       &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::channel::v1::ListCustomerRepricingConfigsResponse>
DefaultCloudChannelServiceStub::ListCustomerRepricingConfigs(
    grpc::ClientContext& client_context,
    google::cloud::channel::v1::ListCustomerRepricingConfigsRequest const&
        request) {
  google::cloud::channel::v1::ListCustomerRepricingConfigsResponse response;
  auto status = grpc_stub_->ListCustomerRepricingConfigs(&client_context,
                                                         request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::channel::v1::CustomerRepricingConfig>
DefaultCloudChannelServiceStub::CreateCustomerRepricingConfig(
    grpc::ClientContext& client_context,
    google::cloud::channel::v1::CreateCustomerRepricingConfigRequest const&
        request) {
  google::cloud::channel::v1::CustomerRepricingConfig response;
  auto status = grpc_stub_->CreateCustomerRepricingConfig(&client_context,
                                                          request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::channel::v1::CustomerRepricingConfig>
DefaultCloudChannelServiceStub::UpdateCustomerRepricingConfig(
    grpc::ClientContext& client_context,
    google::cloud::channel::v1::UpdateCustomerRepricingConfigRequest const&
        request) {
  google::cloud::channel::v1::CustomerRepricingConfig response;
  auto status = grpc_stub_->UpdateCustomerRepricingConfig(&client_context,
                                                          request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultCloudChannelServiceStub::DeleteCustomerRepricingConfig(
    grpc::ClientContext& client_context,
    google::cloud::channel::v1::DeleteCustomerRepricingConfigRequest const&
        request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteCustomerRepricingConfig(&client_context,
                                                          request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::channel::v1::ChannelPartnerRepricingConfig>
DefaultCloudChannelServiceStub::GetChannelPartnerRepricingConfig(
    grpc::ClientContext& client_context,
    google::cloud::channel::v1::GetChannelPartnerRepricingConfigRequest const&
        request) {
  google::cloud::channel::v1::ChannelPartnerRepricingConfig response;
  auto status = grpc_stub_->GetChannelPartnerRepricingConfig(
      &client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::channel::v1::ListChannelPartnerRepricingConfigsResponse>
DefaultCloudChannelServiceStub::ListChannelPartnerRepricingConfigs(
    grpc::ClientContext& client_context,
    google::cloud::channel::v1::ListChannelPartnerRepricingConfigsRequest const&
        request) {
  google::cloud::channel::v1::ListChannelPartnerRepricingConfigsResponse
      response;
  auto status = grpc_stub_->ListChannelPartnerRepricingConfigs(
      &client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::channel::v1::ChannelPartnerRepricingConfig>
DefaultCloudChannelServiceStub::CreateChannelPartnerRepricingConfig(
    grpc::ClientContext& client_context,
    google::cloud::channel::v1::
        CreateChannelPartnerRepricingConfigRequest const& request) {
  google::cloud::channel::v1::ChannelPartnerRepricingConfig response;
  auto status = grpc_stub_->CreateChannelPartnerRepricingConfig(
      &client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::channel::v1::ChannelPartnerRepricingConfig>
DefaultCloudChannelServiceStub::UpdateChannelPartnerRepricingConfig(
    grpc::ClientContext& client_context,
    google::cloud::channel::v1::
        UpdateChannelPartnerRepricingConfigRequest const& request) {
  google::cloud::channel::v1::ChannelPartnerRepricingConfig response;
  auto status = grpc_stub_->UpdateChannelPartnerRepricingConfig(
      &client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultCloudChannelServiceStub::DeleteChannelPartnerRepricingConfig(
    grpc::ClientContext& client_context,
    google::cloud::channel::v1::
        DeleteChannelPartnerRepricingConfigRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteChannelPartnerRepricingConfig(
      &client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::channel::v1::ListSkuGroupsResponse>
DefaultCloudChannelServiceStub::ListSkuGroups(
    grpc::ClientContext& client_context,
    google::cloud::channel::v1::ListSkuGroupsRequest const& request) {
  google::cloud::channel::v1::ListSkuGroupsResponse response;
  auto status = grpc_stub_->ListSkuGroups(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::channel::v1::ListSkuGroupBillableSkusResponse>
DefaultCloudChannelServiceStub::ListSkuGroupBillableSkus(
    grpc::ClientContext& client_context,
    google::cloud::channel::v1::ListSkuGroupBillableSkusRequest const&
        request) {
  google::cloud::channel::v1::ListSkuGroupBillableSkusResponse response;
  auto status =
      grpc_stub_->ListSkuGroupBillableSkus(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::channel::v1::Offer>
DefaultCloudChannelServiceStub::LookupOffer(
    grpc::ClientContext& client_context,
    google::cloud::channel::v1::LookupOfferRequest const& request) {
  google::cloud::channel::v1::Offer response;
  auto status = grpc_stub_->LookupOffer(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::channel::v1::ListProductsResponse>
DefaultCloudChannelServiceStub::ListProducts(
    grpc::ClientContext& client_context,
    google::cloud::channel::v1::ListProductsRequest const& request) {
  google::cloud::channel::v1::ListProductsResponse response;
  auto status = grpc_stub_->ListProducts(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::channel::v1::ListSkusResponse>
DefaultCloudChannelServiceStub::ListSkus(
    grpc::ClientContext& client_context,
    google::cloud::channel::v1::ListSkusRequest const& request) {
  google::cloud::channel::v1::ListSkusResponse response;
  auto status = grpc_stub_->ListSkus(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::channel::v1::ListOffersResponse>
DefaultCloudChannelServiceStub::ListOffers(
    grpc::ClientContext& client_context,
    google::cloud::channel::v1::ListOffersRequest const& request) {
  google::cloud::channel::v1::ListOffersResponse response;
  auto status = grpc_stub_->ListOffers(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::channel::v1::ListPurchasableSkusResponse>
DefaultCloudChannelServiceStub::ListPurchasableSkus(
    grpc::ClientContext& client_context,
    google::cloud::channel::v1::ListPurchasableSkusRequest const& request) {
  google::cloud::channel::v1::ListPurchasableSkusResponse response;
  auto status =
      grpc_stub_->ListPurchasableSkus(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::channel::v1::ListPurchasableOffersResponse>
DefaultCloudChannelServiceStub::ListPurchasableOffers(
    grpc::ClientContext& client_context,
    google::cloud::channel::v1::ListPurchasableOffersRequest const& request) {
  google::cloud::channel::v1::ListPurchasableOffersResponse response;
  auto status =
      grpc_stub_->ListPurchasableOffers(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::channel::v1::QueryEligibleBillingAccountsResponse>
DefaultCloudChannelServiceStub::QueryEligibleBillingAccounts(
    grpc::ClientContext& client_context,
    google::cloud::channel::v1::QueryEligibleBillingAccountsRequest const&
        request) {
  google::cloud::channel::v1::QueryEligibleBillingAccountsResponse response;
  auto status = grpc_stub_->QueryEligibleBillingAccounts(&client_context,
                                                         request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::channel::v1::RegisterSubscriberResponse>
DefaultCloudChannelServiceStub::RegisterSubscriber(
    grpc::ClientContext& client_context,
    google::cloud::channel::v1::RegisterSubscriberRequest const& request) {
  google::cloud::channel::v1::RegisterSubscriberResponse response;
  auto status =
      grpc_stub_->RegisterSubscriber(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::channel::v1::UnregisterSubscriberResponse>
DefaultCloudChannelServiceStub::UnregisterSubscriber(
    grpc::ClientContext& client_context,
    google::cloud::channel::v1::UnregisterSubscriberRequest const& request) {
  google::cloud::channel::v1::UnregisterSubscriberResponse response;
  auto status =
      grpc_stub_->UnregisterSubscriber(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::channel::v1::ListSubscribersResponse>
DefaultCloudChannelServiceStub::ListSubscribers(
    grpc::ClientContext& client_context,
    google::cloud::channel::v1::ListSubscribersRequest const& request) {
  google::cloud::channel::v1::ListSubscribersResponse response;
  auto status =
      grpc_stub_->ListSubscribers(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::channel::v1::ListEntitlementChangesResponse>
DefaultCloudChannelServiceStub::ListEntitlementChanges(
    grpc::ClientContext& client_context,
    google::cloud::channel::v1::ListEntitlementChangesRequest const& request) {
  google::cloud::channel::v1::ListEntitlementChangesResponse response;
  auto status =
      grpc_stub_->ListEntitlementChanges(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCloudChannelServiceStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultCloudChannelServiceStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_->AsyncCancelOperation(context, request, cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace channel_v1_internal
}  // namespace cloud
}  // namespace google
