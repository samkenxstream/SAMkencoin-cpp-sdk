﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhuborchestrator/model/StepGroupStatus.h>
#include <aws/migrationhuborchestrator/model/Owner.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhuborchestrator/model/Tool.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MigrationHubOrchestrator
{
namespace Model
{
  class AWS_MIGRATIONHUBORCHESTRATOR_API GetWorkflowStepGroupResult
  {
  public:
    GetWorkflowStepGroupResult();
    GetWorkflowStepGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetWorkflowStepGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the step group.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the step group.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The ID of the step group.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The ID of the step group.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The ID of the step group.</p>
     */
    inline GetWorkflowStepGroupResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the step group.</p>
     */
    inline GetWorkflowStepGroupResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the step group.</p>
     */
    inline GetWorkflowStepGroupResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline void SetWorkflowId(const Aws::String& value) { m_workflowId = value; }

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline void SetWorkflowId(Aws::String&& value) { m_workflowId = std::move(value); }

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline void SetWorkflowId(const char* value) { m_workflowId.assign(value); }

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline GetWorkflowStepGroupResult& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline GetWorkflowStepGroupResult& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline GetWorkflowStepGroupResult& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}


    /**
     * <p>The name of the step group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the step group.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the step group.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the step group.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the step group.</p>
     */
    inline GetWorkflowStepGroupResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the step group.</p>
     */
    inline GetWorkflowStepGroupResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the step group.</p>
     */
    inline GetWorkflowStepGroupResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the step group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the step group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the step group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the step group.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the step group.</p>
     */
    inline GetWorkflowStepGroupResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the step group.</p>
     */
    inline GetWorkflowStepGroupResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the step group.</p>
     */
    inline GetWorkflowStepGroupResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The status of the step group.</p>
     */
    inline const StepGroupStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the step group.</p>
     */
    inline void SetStatus(const StepGroupStatus& value) { m_status = value; }

    /**
     * <p>The status of the step group.</p>
     */
    inline void SetStatus(StepGroupStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the step group.</p>
     */
    inline GetWorkflowStepGroupResult& WithStatus(const StepGroupStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the step group.</p>
     */
    inline GetWorkflowStepGroupResult& WithStatus(StepGroupStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The owner of the step group.</p>
     */
    inline const Owner& GetOwner() const{ return m_owner; }

    /**
     * <p>The owner of the step group.</p>
     */
    inline void SetOwner(const Owner& value) { m_owner = value; }

    /**
     * <p>The owner of the step group.</p>
     */
    inline void SetOwner(Owner&& value) { m_owner = std::move(value); }

    /**
     * <p>The owner of the step group.</p>
     */
    inline GetWorkflowStepGroupResult& WithOwner(const Owner& value) { SetOwner(value); return *this;}

    /**
     * <p>The owner of the step group.</p>
     */
    inline GetWorkflowStepGroupResult& WithOwner(Owner&& value) { SetOwner(std::move(value)); return *this;}


    /**
     * <p>The time at which the step group was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time at which the step group was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time at which the step group was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time at which the step group was created.</p>
     */
    inline GetWorkflowStepGroupResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time at which the step group was created.</p>
     */
    inline GetWorkflowStepGroupResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time at which the step group was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The time at which the step group was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>The time at which the step group was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>The time at which the step group was last modified.</p>
     */
    inline GetWorkflowStepGroupResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The time at which the step group was last modified.</p>
     */
    inline GetWorkflowStepGroupResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The time at which the step group ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time at which the step group ended.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }

    /**
     * <p>The time at which the step group ended.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }

    /**
     * <p>The time at which the step group ended.</p>
     */
    inline GetWorkflowStepGroupResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time at which the step group ended.</p>
     */
    inline GetWorkflowStepGroupResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>List of AWS services utilized in a migration workflow.</p>
     */
    inline const Aws::Vector<Tool>& GetTools() const{ return m_tools; }

    /**
     * <p>List of AWS services utilized in a migration workflow.</p>
     */
    inline void SetTools(const Aws::Vector<Tool>& value) { m_tools = value; }

    /**
     * <p>List of AWS services utilized in a migration workflow.</p>
     */
    inline void SetTools(Aws::Vector<Tool>&& value) { m_tools = std::move(value); }

    /**
     * <p>List of AWS services utilized in a migration workflow.</p>
     */
    inline GetWorkflowStepGroupResult& WithTools(const Aws::Vector<Tool>& value) { SetTools(value); return *this;}

    /**
     * <p>List of AWS services utilized in a migration workflow.</p>
     */
    inline GetWorkflowStepGroupResult& WithTools(Aws::Vector<Tool>&& value) { SetTools(std::move(value)); return *this;}

    /**
     * <p>List of AWS services utilized in a migration workflow.</p>
     */
    inline GetWorkflowStepGroupResult& AddTools(const Tool& value) { m_tools.push_back(value); return *this; }

    /**
     * <p>List of AWS services utilized in a migration workflow.</p>
     */
    inline GetWorkflowStepGroupResult& AddTools(Tool&& value) { m_tools.push_back(std::move(value)); return *this; }


    /**
     * <p>The previous step group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrevious() const{ return m_previous; }

    /**
     * <p>The previous step group.</p>
     */
    inline void SetPrevious(const Aws::Vector<Aws::String>& value) { m_previous = value; }

    /**
     * <p>The previous step group.</p>
     */
    inline void SetPrevious(Aws::Vector<Aws::String>&& value) { m_previous = std::move(value); }

    /**
     * <p>The previous step group.</p>
     */
    inline GetWorkflowStepGroupResult& WithPrevious(const Aws::Vector<Aws::String>& value) { SetPrevious(value); return *this;}

    /**
     * <p>The previous step group.</p>
     */
    inline GetWorkflowStepGroupResult& WithPrevious(Aws::Vector<Aws::String>&& value) { SetPrevious(std::move(value)); return *this;}

    /**
     * <p>The previous step group.</p>
     */
    inline GetWorkflowStepGroupResult& AddPrevious(const Aws::String& value) { m_previous.push_back(value); return *this; }

    /**
     * <p>The previous step group.</p>
     */
    inline GetWorkflowStepGroupResult& AddPrevious(Aws::String&& value) { m_previous.push_back(std::move(value)); return *this; }

    /**
     * <p>The previous step group.</p>
     */
    inline GetWorkflowStepGroupResult& AddPrevious(const char* value) { m_previous.push_back(value); return *this; }


    /**
     * <p>The next step group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNext() const{ return m_next; }

    /**
     * <p>The next step group.</p>
     */
    inline void SetNext(const Aws::Vector<Aws::String>& value) { m_next = value; }

    /**
     * <p>The next step group.</p>
     */
    inline void SetNext(Aws::Vector<Aws::String>&& value) { m_next = std::move(value); }

    /**
     * <p>The next step group.</p>
     */
    inline GetWorkflowStepGroupResult& WithNext(const Aws::Vector<Aws::String>& value) { SetNext(value); return *this;}

    /**
     * <p>The next step group.</p>
     */
    inline GetWorkflowStepGroupResult& WithNext(Aws::Vector<Aws::String>&& value) { SetNext(std::move(value)); return *this;}

    /**
     * <p>The next step group.</p>
     */
    inline GetWorkflowStepGroupResult& AddNext(const Aws::String& value) { m_next.push_back(value); return *this; }

    /**
     * <p>The next step group.</p>
     */
    inline GetWorkflowStepGroupResult& AddNext(Aws::String&& value) { m_next.push_back(std::move(value)); return *this; }

    /**
     * <p>The next step group.</p>
     */
    inline GetWorkflowStepGroupResult& AddNext(const char* value) { m_next.push_back(value); return *this; }

  private:

    Aws::String m_id;

    Aws::String m_workflowId;

    Aws::String m_name;

    Aws::String m_description;

    StepGroupStatus m_status;

    Owner m_owner;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::Utils::DateTime m_endTime;

    Aws::Vector<Tool> m_tools;

    Aws::Vector<Aws::String> m_previous;

    Aws::Vector<Aws::String> m_next;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
