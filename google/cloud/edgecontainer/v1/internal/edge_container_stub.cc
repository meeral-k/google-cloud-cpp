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
// source: google/cloud/edgecontainer/v1/service.proto

#include "google/cloud/edgecontainer/v1/internal/edge_container_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/edgecontainer/v1/service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace edgecontainer_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EdgeContainerStub::~EdgeContainerStub() = default;

StatusOr<google::cloud::edgecontainer::v1::ListClustersResponse>
DefaultEdgeContainerStub::ListClusters(
    grpc::ClientContext& client_context,
    google::cloud::edgecontainer::v1::ListClustersRequest const& request) {
  google::cloud::edgecontainer::v1::ListClustersResponse response;
  auto status = grpc_stub_->ListClusters(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::edgecontainer::v1::Cluster>
DefaultEdgeContainerStub::GetCluster(
    grpc::ClientContext& client_context,
    google::cloud::edgecontainer::v1::GetClusterRequest const& request) {
  google::cloud::edgecontainer::v1::Cluster response;
  auto status = grpc_stub_->GetCluster(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultEdgeContainerStub::AsyncCreateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::edgecontainer::v1::CreateClusterRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::edgecontainer::v1::CreateClusterRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::edgecontainer::v1::CreateClusterRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateCluster(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultEdgeContainerStub::AsyncUpdateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::edgecontainer::v1::UpdateClusterRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::edgecontainer::v1::UpdateClusterRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::edgecontainer::v1::UpdateClusterRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateCluster(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultEdgeContainerStub::AsyncDeleteCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::edgecontainer::v1::DeleteClusterRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::edgecontainer::v1::DeleteClusterRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::edgecontainer::v1::DeleteClusterRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteCluster(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::edgecontainer::v1::GenerateAccessTokenResponse>
DefaultEdgeContainerStub::GenerateAccessToken(
    grpc::ClientContext& client_context,
    google::cloud::edgecontainer::v1::GenerateAccessTokenRequest const&
        request) {
  google::cloud::edgecontainer::v1::GenerateAccessTokenResponse response;
  auto status =
      grpc_stub_->GenerateAccessToken(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::edgecontainer::v1::ListNodePoolsResponse>
DefaultEdgeContainerStub::ListNodePools(
    grpc::ClientContext& client_context,
    google::cloud::edgecontainer::v1::ListNodePoolsRequest const& request) {
  google::cloud::edgecontainer::v1::ListNodePoolsResponse response;
  auto status = grpc_stub_->ListNodePools(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::edgecontainer::v1::NodePool>
DefaultEdgeContainerStub::GetNodePool(
    grpc::ClientContext& client_context,
    google::cloud::edgecontainer::v1::GetNodePoolRequest const& request) {
  google::cloud::edgecontainer::v1::NodePool response;
  auto status = grpc_stub_->GetNodePool(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultEdgeContainerStub::AsyncCreateNodePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::edgecontainer::v1::CreateNodePoolRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::edgecontainer::v1::CreateNodePoolRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::edgecontainer::v1::CreateNodePoolRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateNodePool(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultEdgeContainerStub::AsyncUpdateNodePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::edgecontainer::v1::UpdateNodePoolRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::edgecontainer::v1::UpdateNodePoolRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::edgecontainer::v1::UpdateNodePoolRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateNodePool(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultEdgeContainerStub::AsyncDeleteNodePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::edgecontainer::v1::DeleteNodePoolRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::edgecontainer::v1::DeleteNodePoolRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::edgecontainer::v1::DeleteNodePoolRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteNodePool(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::edgecontainer::v1::ListMachinesResponse>
DefaultEdgeContainerStub::ListMachines(
    grpc::ClientContext& client_context,
    google::cloud::edgecontainer::v1::ListMachinesRequest const& request) {
  google::cloud::edgecontainer::v1::ListMachinesResponse response;
  auto status = grpc_stub_->ListMachines(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::edgecontainer::v1::Machine>
DefaultEdgeContainerStub::GetMachine(
    grpc::ClientContext& client_context,
    google::cloud::edgecontainer::v1::GetMachineRequest const& request) {
  google::cloud::edgecontainer::v1::Machine response;
  auto status = grpc_stub_->GetMachine(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::edgecontainer::v1::ListVpnConnectionsResponse>
DefaultEdgeContainerStub::ListVpnConnections(
    grpc::ClientContext& client_context,
    google::cloud::edgecontainer::v1::ListVpnConnectionsRequest const&
        request) {
  google::cloud::edgecontainer::v1::ListVpnConnectionsResponse response;
  auto status =
      grpc_stub_->ListVpnConnections(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::edgecontainer::v1::VpnConnection>
DefaultEdgeContainerStub::GetVpnConnection(
    grpc::ClientContext& client_context,
    google::cloud::edgecontainer::v1::GetVpnConnectionRequest const& request) {
  google::cloud::edgecontainer::v1::VpnConnection response;
  auto status =
      grpc_stub_->GetVpnConnection(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultEdgeContainerStub::AsyncCreateVpnConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::edgecontainer::v1::CreateVpnConnectionRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::edgecontainer::v1::CreateVpnConnectionRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::edgecontainer::v1::CreateVpnConnectionRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateVpnConnection(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultEdgeContainerStub::AsyncDeleteVpnConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::edgecontainer::v1::DeleteVpnConnectionRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::edgecontainer::v1::DeleteVpnConnectionRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::edgecontainer::v1::DeleteVpnConnectionRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteVpnConnection(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultEdgeContainerStub::AsyncGetOperation(
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

future<Status> DefaultEdgeContainerStub::AsyncCancelOperation(
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
}  // namespace edgecontainer_v1_internal
}  // namespace cloud
}  // namespace google
