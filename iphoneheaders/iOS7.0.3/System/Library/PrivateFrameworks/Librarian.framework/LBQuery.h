/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Librarian.framework/Librarian
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
#import <Librarian/Librarian-Structs.h>
@class NSMetadataQuery, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSArray, NSObject, LBFSEventsWatcher, NSOperationQueue, NSPredicate;

@interface LBQuery : NSObject {

	NSMetadataQuery* _query;
	unsigned _accumulatedItemCount;
	NSMutableArray* _changes;
	NSMutableDictionary* _toBeRemoved;
	NSMutableDictionary* _toBeReplaced;
	NSMutableDictionary* _toBeInserted;
	NSMutableIndexSet* _removalSet;
	NSMutableIndexSet* _replacementSet;
	NSMutableIndexSet* _insertionSet;
	bool _pendingChanges;
	bool _ubiquitousGatherComplete;
	int _queryState;
	int _previousQueryState;
	BOOL _synchronous;
	NSArray* _values;
	NSArray* _sortingAttributes;
	SCD_Struct_LB0 _batchingParameters;
	NSMutableArray* _results;
	NSMutableDictionary* _resultsDict;
	/*function pointer*/ void* _create_result_fn;
	void* _create_result_context;
	/*function pointer*/ void* _create_result_callbacks_equal;
	/*function pointer*/ void* _create_result_callbacks_release;
	/*function pointer*/ void* _create_value_fn;
	void* _create_value_context;
	/*function pointer*/ void* _create_value_callbacks_equal;
	/*function pointer*/ void* _create_value_callbacks_release;
	NSArray* _searchScopes;
	unsigned long _scopeOptions;
	/*function pointer*/ void* _sort_fn;
	void* _sort_context;
	NSObject<OS_dispatch_queue>* _notificationQueue;
	LBItemUpdateObserverRef _observer;
	LBFSEventsWatcher* _watcher;
	CFRunLoopRef _runLoop;
	NSOperationQueue* _queryQueue;
	bool _pendingNote;
	unsigned long _notifyInterval;
	int _disableCount;
	NSMutableDictionary* _created;
	NSPredicate* _predicate;
	opaque_pthread_mutex_t _stateLock;

}
-(unsigned)resultCount;
-(void)disableUpdates;
-(void)enableUpdates;
-(const void*)resultAtIndex:(int)arg1 ;
-(int)indexOfResult:(const void*)arg1 ;
-(id)attributeValueForName:(id)arg1 forResultAtIndex:(int)arg2 ;
-(unsigned)countOfResultsForAttributeName:(id)arg1 value:(id)arg2 ;
-(id)valuesOfAttribute:(id)arg1 ;
-(void)processUpdates;
-(unsigned char)executeWithOptions:(unsigned long)arg1 ;
-(void)setSearchScope:(id)arg1 withOptions:(unsigned long)arg2 ;
-(void)setSortComparator:(/*function pointer*/ void*)arg1 withContext:(void*)arg2 ;
-(void)setCreateValueFunction:(/*function pointer*/ void*)arg1 withContext:(void*)arg2 callbacks:(const SCD_Struct_LB4*)arg3 ;
-(void)setCreateResultFunction:(/*function pointer*/ void*)arg1 withContext:(void*)arg2 callbacks:(const SCD_Struct_LB4*)arg3 ;
-(id)initWithQuery:(id)arg1 values:(id)arg2 sortingAttributes:(id)arg3 items:(id)arg4 ;
-(void)setBatchingParameters:(SCD_Struct_LB0)arg1 ;
-(void)setQueryQueue:(id)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)performBlock:(/*^block*/ id)arg1 ;
-(id)predicate;
-(void)_disableUpdates;
-(void)startObserver;
-(void)_sendNote;
-(void)_enableUpdates;
-(void)postNote:(CFStringRef)arg1 ;
-(void)_processChanges;
-(void)_processUpdates;
-(void)addItemWithURL:(id)arg1 usingInfo:(id)arg2 ;
-(void)addCreatedURL:(id)arg1 withInfo:(id)arg2 ;
-(void)deleteURL:(id)arg1 ;
-(void)addChangeToURL:(id)arg1 withInfo:(id)arg2 ;
-(void)__updateQueryResultForURL:(id)arg1 info:(id)arg2 updateType:(int)arg3 ;
-(void)_updateQueryResultForURL:(id)arg1 info:(id)arg2 updateType:(int)arg3 ;
-(void)_runQuery;
-(void)_willChange:(unsigned)arg1 inSet:(id)arg2 ;
-(void)_didChange:(unsigned)arg1 inSet:(id)arg2 ;
-(void)_createChangeSets;
-(void)_willReplace:(id)arg1 ;
-(void)_didReplace:(id)arg1 ;
-(void)_willRemove:(id)arg1 ;
-(void)_didRemove:(id)arg1 ;
-(void)_willInsert:(id)arg1 ;
-(void)_didInsert:(id)arg1 ;
-(void)sendNote;
-(void)updateQueryResultForURL:(id)arg1 info:(id)arg2 updateType:(int)arg3 ;
-(id)queryQueue;
@end
