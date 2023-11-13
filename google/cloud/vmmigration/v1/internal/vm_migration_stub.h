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
// source: google/cloud/vmmigration/v1/vmmigration.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VMMIGRATION_V1_INTERNAL_VM_MIGRATION_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VMMIGRATION_V1_INTERNAL_VM_MIGRATION_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/vmmigration/v1/vmmigration.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace vmmigration_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class VmMigrationStub {
 public:
  virtual ~VmMigrationStub() = 0;

  virtual StatusOr<google::cloud::vmmigration::v1::ListSourcesResponse>
  ListSources(
      grpc::ClientContext& context,
      google::cloud::vmmigration::v1::ListSourcesRequest const& request) = 0;

  virtual StatusOr<google::cloud::vmmigration::v1::Source> GetSource(
      grpc::ClientContext& context,
      google::cloud::vmmigration::v1::GetSourceRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateSource(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::CreateSourceRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncUpdateSource(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::UpdateSourceRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteSource(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::DeleteSourceRequest const& request) = 0;

  virtual StatusOr<google::cloud::vmmigration::v1::FetchInventoryResponse>
  FetchInventory(
      grpc::ClientContext& context,
      google::cloud::vmmigration::v1::FetchInventoryRequest const& request) = 0;

  virtual StatusOr<
      google::cloud::vmmigration::v1::ListUtilizationReportsResponse>
  ListUtilizationReports(
      grpc::ClientContext& context,
      google::cloud::vmmigration::v1::ListUtilizationReportsRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::vmmigration::v1::UtilizationReport>
  GetUtilizationReport(
      grpc::ClientContext& context,
      google::cloud::vmmigration::v1::GetUtilizationReportRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateUtilizationReport(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::CreateUtilizationReportRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteUtilizationReport(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::DeleteUtilizationReportRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::vmmigration::v1::ListDatacenterConnectorsResponse>
  ListDatacenterConnectors(
      grpc::ClientContext& context,
      google::cloud::vmmigration::v1::ListDatacenterConnectorsRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::vmmigration::v1::DatacenterConnector>
  GetDatacenterConnector(
      grpc::ClientContext& context,
      google::cloud::vmmigration::v1::GetDatacenterConnectorRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateDatacenterConnector(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::CreateDatacenterConnectorRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteDatacenterConnector(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::DeleteDatacenterConnectorRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUpgradeAppliance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::UpgradeApplianceRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateMigratingVm(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::CreateMigratingVmRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::vmmigration::v1::ListMigratingVmsResponse>
  ListMigratingVms(
      grpc::ClientContext& context,
      google::cloud::vmmigration::v1::ListMigratingVmsRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::vmmigration::v1::MigratingVm> GetMigratingVm(
      grpc::ClientContext& context,
      google::cloud::vmmigration::v1::GetMigratingVmRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateMigratingVm(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::UpdateMigratingVmRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteMigratingVm(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::DeleteMigratingVmRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncStartMigration(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::StartMigrationRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncResumeMigration(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::ResumeMigrationRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncPauseMigration(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::PauseMigrationRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncFinalizeMigration(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::FinalizeMigrationRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateCloneJob(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::CreateCloneJobRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCancelCloneJob(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::CancelCloneJobRequest const& request) = 0;

  virtual StatusOr<google::cloud::vmmigration::v1::ListCloneJobsResponse>
  ListCloneJobs(
      grpc::ClientContext& context,
      google::cloud::vmmigration::v1::ListCloneJobsRequest const& request) = 0;

  virtual StatusOr<google::cloud::vmmigration::v1::CloneJob> GetCloneJob(
      grpc::ClientContext& context,
      google::cloud::vmmigration::v1::GetCloneJobRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateCutoverJob(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::CreateCutoverJobRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCancelCutoverJob(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::CancelCutoverJobRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::vmmigration::v1::ListCutoverJobsResponse>
  ListCutoverJobs(grpc::ClientContext& context,
                  google::cloud::vmmigration::v1::ListCutoverJobsRequest const&
                      request) = 0;

  virtual StatusOr<google::cloud::vmmigration::v1::CutoverJob> GetCutoverJob(
      grpc::ClientContext& context,
      google::cloud::vmmigration::v1::GetCutoverJobRequest const& request) = 0;

  virtual StatusOr<google::cloud::vmmigration::v1::ListGroupsResponse>
  ListGroups(
      grpc::ClientContext& context,
      google::cloud::vmmigration::v1::ListGroupsRequest const& request) = 0;

  virtual StatusOr<google::cloud::vmmigration::v1::Group> GetGroup(
      grpc::ClientContext& context,
      google::cloud::vmmigration::v1::GetGroupRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateGroup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::CreateGroupRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncUpdateGroup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::UpdateGroupRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteGroup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::DeleteGroupRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncAddGroupMigration(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::AddGroupMigrationRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncRemoveGroupMigration(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::RemoveGroupMigrationRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::vmmigration::v1::ListTargetProjectsResponse>
  ListTargetProjects(
      grpc::ClientContext& context,
      google::cloud::vmmigration::v1::ListTargetProjectsRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::vmmigration::v1::TargetProject>
  GetTargetProject(
      grpc::ClientContext& context,
      google::cloud::vmmigration::v1::GetTargetProjectRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateTargetProject(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::CreateTargetProjectRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateTargetProject(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::UpdateTargetProjectRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteTargetProject(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::DeleteTargetProjectRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::vmmigration::v1::ListReplicationCyclesResponse>
  ListReplicationCycles(
      grpc::ClientContext& context,
      google::cloud::vmmigration::v1::ListReplicationCyclesRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::vmmigration::v1::ReplicationCycle>
  GetReplicationCycle(
      grpc::ClientContext& context,
      google::cloud::vmmigration::v1::GetReplicationCycleRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultVmMigrationStub : public VmMigrationStub {
 public:
  DefaultVmMigrationStub(
      std::unique_ptr<
          google::cloud::vmmigration::v1::VmMigration::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)), operations_(std::move(operations)) {}

  StatusOr<google::cloud::vmmigration::v1::ListSourcesResponse> ListSources(
      grpc::ClientContext& client_context,
      google::cloud::vmmigration::v1::ListSourcesRequest const& request)
      override;

  StatusOr<google::cloud::vmmigration::v1::Source> GetSource(
      grpc::ClientContext& client_context,
      google::cloud::vmmigration::v1::GetSourceRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateSource(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::CreateSourceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateSource(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::UpdateSourceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteSource(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::DeleteSourceRequest const& request)
      override;

  StatusOr<google::cloud::vmmigration::v1::FetchInventoryResponse>
  FetchInventory(grpc::ClientContext& client_context,
                 google::cloud::vmmigration::v1::FetchInventoryRequest const&
                     request) override;

  StatusOr<google::cloud::vmmigration::v1::ListUtilizationReportsResponse>
  ListUtilizationReports(
      grpc::ClientContext& client_context,
      google::cloud::vmmigration::v1::ListUtilizationReportsRequest const&
          request) override;

  StatusOr<google::cloud::vmmigration::v1::UtilizationReport>
  GetUtilizationReport(
      grpc::ClientContext& client_context,
      google::cloud::vmmigration::v1::GetUtilizationReportRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateUtilizationReport(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::CreateUtilizationReportRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteUtilizationReport(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::DeleteUtilizationReportRequest const&
          request) override;

  StatusOr<google::cloud::vmmigration::v1::ListDatacenterConnectorsResponse>
  ListDatacenterConnectors(
      grpc::ClientContext& client_context,
      google::cloud::vmmigration::v1::ListDatacenterConnectorsRequest const&
          request) override;

  StatusOr<google::cloud::vmmigration::v1::DatacenterConnector>
  GetDatacenterConnector(
      grpc::ClientContext& client_context,
      google::cloud::vmmigration::v1::GetDatacenterConnectorRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncCreateDatacenterConnector(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::CreateDatacenterConnectorRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteDatacenterConnector(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::DeleteDatacenterConnectorRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpgradeAppliance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::UpgradeApplianceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateMigratingVm(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::CreateMigratingVmRequest const& request)
      override;

  StatusOr<google::cloud::vmmigration::v1::ListMigratingVmsResponse>
  ListMigratingVms(
      grpc::ClientContext& client_context,
      google::cloud::vmmigration::v1::ListMigratingVmsRequest const& request)
      override;

  StatusOr<google::cloud::vmmigration::v1::MigratingVm> GetMigratingVm(
      grpc::ClientContext& client_context,
      google::cloud::vmmigration::v1::GetMigratingVmRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateMigratingVm(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::UpdateMigratingVmRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteMigratingVm(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::DeleteMigratingVmRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncStartMigration(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::StartMigrationRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncResumeMigration(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::ResumeMigrationRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncPauseMigration(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::PauseMigrationRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncFinalizeMigration(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::FinalizeMigrationRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateCloneJob(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::CreateCloneJobRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCancelCloneJob(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::CancelCloneJobRequest const& request)
      override;

  StatusOr<google::cloud::vmmigration::v1::ListCloneJobsResponse> ListCloneJobs(
      grpc::ClientContext& client_context,
      google::cloud::vmmigration::v1::ListCloneJobsRequest const& request)
      override;

  StatusOr<google::cloud::vmmigration::v1::CloneJob> GetCloneJob(
      grpc::ClientContext& client_context,
      google::cloud::vmmigration::v1::GetCloneJobRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateCutoverJob(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::CreateCutoverJobRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCancelCutoverJob(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::CancelCutoverJobRequest const& request)
      override;

  StatusOr<google::cloud::vmmigration::v1::ListCutoverJobsResponse>
  ListCutoverJobs(grpc::ClientContext& client_context,
                  google::cloud::vmmigration::v1::ListCutoverJobsRequest const&
                      request) override;

  StatusOr<google::cloud::vmmigration::v1::CutoverJob> GetCutoverJob(
      grpc::ClientContext& client_context,
      google::cloud::vmmigration::v1::GetCutoverJobRequest const& request)
      override;

  StatusOr<google::cloud::vmmigration::v1::ListGroupsResponse> ListGroups(
      grpc::ClientContext& client_context,
      google::cloud::vmmigration::v1::ListGroupsRequest const& request)
      override;

  StatusOr<google::cloud::vmmigration::v1::Group> GetGroup(
      grpc::ClientContext& client_context,
      google::cloud::vmmigration::v1::GetGroupRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateGroup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::CreateGroupRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateGroup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::UpdateGroupRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteGroup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::DeleteGroupRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncAddGroupMigration(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::AddGroupMigrationRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncRemoveGroupMigration(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::RemoveGroupMigrationRequest const&
          request) override;

  StatusOr<google::cloud::vmmigration::v1::ListTargetProjectsResponse>
  ListTargetProjects(
      grpc::ClientContext& client_context,
      google::cloud::vmmigration::v1::ListTargetProjectsRequest const& request)
      override;

  StatusOr<google::cloud::vmmigration::v1::TargetProject> GetTargetProject(
      grpc::ClientContext& client_context,
      google::cloud::vmmigration::v1::GetTargetProjectRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateTargetProject(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::CreateTargetProjectRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateTargetProject(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::UpdateTargetProjectRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteTargetProject(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::vmmigration::v1::DeleteTargetProjectRequest const& request)
      override;

  StatusOr<google::cloud::vmmigration::v1::ListReplicationCyclesResponse>
  ListReplicationCycles(
      grpc::ClientContext& client_context,
      google::cloud::vmmigration::v1::ListReplicationCyclesRequest const&
          request) override;

  StatusOr<google::cloud::vmmigration::v1::ReplicationCycle>
  GetReplicationCycle(
      grpc::ClientContext& client_context,
      google::cloud::vmmigration::v1::GetReplicationCycleRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::vmmigration::v1::VmMigration::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vmmigration_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VMMIGRATION_V1_INTERNAL_VM_MIGRATION_STUB_H
