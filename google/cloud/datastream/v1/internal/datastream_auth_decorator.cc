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
// source: google/cloud/datastream/v1/datastream.proto

#include "google/cloud/datastream/v1/internal/datastream_auth_decorator.h"
#include <google/cloud/datastream/v1/datastream.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace datastream_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DatastreamAuth::DatastreamAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<DatastreamStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::datastream::v1::ListConnectionProfilesResponse>
DatastreamAuth::ListConnectionProfiles(
    grpc::ClientContext& context,
    google::cloud::datastream::v1::ListConnectionProfilesRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListConnectionProfiles(context, request);
}

StatusOr<google::cloud::datastream::v1::ConnectionProfile>
DatastreamAuth::GetConnectionProfile(
    grpc::ClientContext& context,
    google::cloud::datastream::v1::GetConnectionProfileRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetConnectionProfile(context, request);
}

future<StatusOr<google::longrunning::Operation>>
DatastreamAuth::AsyncCreateConnectionProfile(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::datastream::v1::CreateConnectionProfileRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateConnectionProfile(cq, *std::move(context),
                                                   options, request);
      });
}

future<StatusOr<google::longrunning::Operation>>
DatastreamAuth::AsyncUpdateConnectionProfile(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::datastream::v1::UpdateConnectionProfileRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateConnectionProfile(cq, *std::move(context),
                                                   options, request);
      });
}

future<StatusOr<google::longrunning::Operation>>
DatastreamAuth::AsyncDeleteConnectionProfile(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::datastream::v1::DeleteConnectionProfileRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteConnectionProfile(cq, *std::move(context),
                                                   options, request);
      });
}

StatusOr<google::cloud::datastream::v1::DiscoverConnectionProfileResponse>
DatastreamAuth::DiscoverConnectionProfile(
    grpc::ClientContext& context,
    google::cloud::datastream::v1::DiscoverConnectionProfileRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DiscoverConnectionProfile(context, request);
}

StatusOr<google::cloud::datastream::v1::ListStreamsResponse>
DatastreamAuth::ListStreams(
    grpc::ClientContext& context,
    google::cloud::datastream::v1::ListStreamsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListStreams(context, request);
}

StatusOr<google::cloud::datastream::v1::Stream> DatastreamAuth::GetStream(
    grpc::ClientContext& context,
    google::cloud::datastream::v1::GetStreamRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetStream(context, request);
}

future<StatusOr<google::longrunning::Operation>>
DatastreamAuth::AsyncCreateStream(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::datastream::v1::CreateStreamRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateStream(cq, *std::move(context), options,
                                        request);
      });
}

future<StatusOr<google::longrunning::Operation>>
DatastreamAuth::AsyncUpdateStream(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::datastream::v1::UpdateStreamRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateStream(cq, *std::move(context), options,
                                        request);
      });
}

future<StatusOr<google::longrunning::Operation>>
DatastreamAuth::AsyncDeleteStream(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::datastream::v1::DeleteStreamRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteStream(cq, *std::move(context), options,
                                        request);
      });
}

StatusOr<google::cloud::datastream::v1::StreamObject>
DatastreamAuth::GetStreamObject(
    grpc::ClientContext& context,
    google::cloud::datastream::v1::GetStreamObjectRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetStreamObject(context, request);
}

StatusOr<google::cloud::datastream::v1::StreamObject>
DatastreamAuth::LookupStreamObject(
    grpc::ClientContext& context,
    google::cloud::datastream::v1::LookupStreamObjectRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->LookupStreamObject(context, request);
}

StatusOr<google::cloud::datastream::v1::ListStreamObjectsResponse>
DatastreamAuth::ListStreamObjects(
    grpc::ClientContext& context,
    google::cloud::datastream::v1::ListStreamObjectsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListStreamObjects(context, request);
}

StatusOr<google::cloud::datastream::v1::StartBackfillJobResponse>
DatastreamAuth::StartBackfillJob(
    grpc::ClientContext& context,
    google::cloud::datastream::v1::StartBackfillJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->StartBackfillJob(context, request);
}

StatusOr<google::cloud::datastream::v1::StopBackfillJobResponse>
DatastreamAuth::StopBackfillJob(
    grpc::ClientContext& context,
    google::cloud::datastream::v1::StopBackfillJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->StopBackfillJob(context, request);
}

StatusOr<google::cloud::datastream::v1::FetchStaticIpsResponse>
DatastreamAuth::FetchStaticIps(
    grpc::ClientContext& context,
    google::cloud::datastream::v1::FetchStaticIpsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->FetchStaticIps(context, request);
}

future<StatusOr<google::longrunning::Operation>>
DatastreamAuth::AsyncCreatePrivateConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::datastream::v1::CreatePrivateConnectionRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreatePrivateConnection(cq, *std::move(context),
                                                   options, request);
      });
}

StatusOr<google::cloud::datastream::v1::PrivateConnection>
DatastreamAuth::GetPrivateConnection(
    grpc::ClientContext& context,
    google::cloud::datastream::v1::GetPrivateConnectionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetPrivateConnection(context, request);
}

StatusOr<google::cloud::datastream::v1::ListPrivateConnectionsResponse>
DatastreamAuth::ListPrivateConnections(
    grpc::ClientContext& context,
    google::cloud::datastream::v1::ListPrivateConnectionsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListPrivateConnections(context, request);
}

future<StatusOr<google::longrunning::Operation>>
DatastreamAuth::AsyncDeletePrivateConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::datastream::v1::DeletePrivateConnectionRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeletePrivateConnection(cq, *std::move(context),
                                                   options, request);
      });
}

future<StatusOr<google::longrunning::Operation>>
DatastreamAuth::AsyncCreateRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::datastream::v1::CreateRouteRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateRoute(cq, *std::move(context), options,
                                       request);
      });
}

StatusOr<google::cloud::datastream::v1::Route> DatastreamAuth::GetRoute(
    grpc::ClientContext& context,
    google::cloud::datastream::v1::GetRouteRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetRoute(context, request);
}

StatusOr<google::cloud::datastream::v1::ListRoutesResponse>
DatastreamAuth::ListRoutes(
    grpc::ClientContext& context,
    google::cloud::datastream::v1::ListRoutesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListRoutes(context, request);
}

future<StatusOr<google::longrunning::Operation>>
DatastreamAuth::AsyncDeleteRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::datastream::v1::DeleteRouteRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteRoute(cq, *std::move(context), options,
                                       request);
      });
}

future<StatusOr<google::longrunning::Operation>>
DatastreamAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context), options,
                                        request);
      });
}

future<Status> DatastreamAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context), options,
                                           request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datastream_v1_internal
}  // namespace cloud
}  // namespace google
