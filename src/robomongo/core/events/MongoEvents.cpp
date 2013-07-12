#include "robomongo/core/events/MongoEvents.h"
#include "robomongo/core/Core.h"

namespace Robomongo
{

    R_REGISTER_EVENT(InitRequest)
    R_REGISTER_EVENT(InitResponse)
    R_REGISTER_EVENT(FinalizeRequest)
    R_REGISTER_EVENT(FinalizeResponse)
    R_REGISTER_EVENT(EstablishConnectionRequest)
    R_REGISTER_EVENT(EstablishConnectionResponse)
    R_REGISTER_EVENT(LoadDatabaseNamesRequest)
    R_REGISTER_EVENT(LoadDatabaseNamesResponse)
    R_REGISTER_EVENT(LoadCollectionNamesRequest)
    R_REGISTER_EVENT(LoadCollectionNamesResponse)
    R_REGISTER_EVENT(LoadUsersRequest)
	R_REGISTER_EVENT(LoadCollectionIndexesRequest)
	R_REGISTER_EVENT(LoadCollectionIndexesResponse)
    R_REGISTER_EVENT(LoadUsersResponse)
    R_REGISTER_EVENT(LoadFunctionsRequest)
    R_REGISTER_EVENT(LoadFunctionsResponse)
    R_REGISTER_EVENT(SomethingHappened)
    R_REGISTER_EVENT(ConnectingEvent)
    R_REGISTER_EVENT(ConnectionFailedEvent)
    R_REGISTER_EVENT(ConnectionEstablishedEvent)
    R_REGISTER_EVENT(DatabaseListLoadedEvent)
    R_REGISTER_EVENT(OpeningShellEvent)
    R_REGISTER_EVENT(ExecuteQueryRequest)
    R_REGISTER_EVENT(ExecuteQueryResponse)
    R_REGISTER_EVENT(DocumentListLoadedEvent)
    R_REGISTER_EVENT(ExecuteScriptRequest)
    R_REGISTER_EVENT(ExecuteScriptResponse)
    R_REGISTER_EVENT(AutocompleteRequest)
    R_REGISTER_EVENT(AutocompleteResponse)
    R_REGISTER_EVENT(ScriptExecutedEvent)
    R_REGISTER_EVENT(ScriptExecutingEvent)
    R_REGISTER_EVENT(InsertDocumentRequest)
    R_REGISTER_EVENT(InsertDocumentResponse)
    R_REGISTER_EVENT(RemoveDocumentRequest)
    R_REGISTER_EVENT(RemoveDocumentResponse)
    R_REGISTER_EVENT(CreateDatabaseRequest)
    R_REGISTER_EVENT(CreateDatabaseResponse)
    R_REGISTER_EVENT(DropDatabaseRequest)
    R_REGISTER_EVENT(DropDatabaseResponse)
    R_REGISTER_EVENT(CreateCollectionRequest)
    R_REGISTER_EVENT(CreateCollectionResponse)
    R_REGISTER_EVENT(DropCollectionRequest)
    R_REGISTER_EVENT(DropCollectionResponse)
    R_REGISTER_EVENT(RenameCollectionRequest)
    R_REGISTER_EVENT(RenameCollectionResponse)
    R_REGISTER_EVENT(DuplicateCollectionRequest)
    R_REGISTER_EVENT(DuplicateCollectionResponse)
    R_REGISTER_EVENT(CreateUserRequest)
    R_REGISTER_EVENT(CreateUserResponse)
    R_REGISTER_EVENT(DropUserRequest)
    R_REGISTER_EVENT(DropUserResponse)
    R_REGISTER_EVENT(CreateFunctionRequest)
    R_REGISTER_EVENT(CreateFunctionResponse)
    R_REGISTER_EVENT(DropFunctionRequest)
    R_REGISTER_EVENT(DropFunctionResponse)
    R_REGISTER_EVENT(QueryWidgetUpdatedEvent)
    R_REGISTER_EVENT(AllTabsClosedEvent)
}
