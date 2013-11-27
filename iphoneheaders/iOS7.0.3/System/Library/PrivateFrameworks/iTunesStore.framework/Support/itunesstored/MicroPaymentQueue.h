/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
@class NSManagedObjectID, NSMutableArray, NSObject;

@interface MicroPaymentQueue : NSObject {

	NSManagedObjectID* _activePaymentID;
	int _aliveState;
	int _changeSetCount;
	NSMutableArray* _clients;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	BOOL _observingNetworkChanges;

}
+(id)paymentQueue;
+(BOOL)canMakePayments;
-(void)notifyClientsOfExternalPropertyChanges:(id)arg1 ofDownloadID:(long long)arg2 ;
-(void)failDownloadsWithIdentifiers:(id)arg1 ;
-(void)finishDownloadsWithIdentifiers:(id)arg1 ;
-(void)observeXPCServer:(id)arg1 ;
-(void)_refreshDidFinishNotification:(id)arg1 ;
-(void)_clientDisconnectNotification:(id)arg1 ;
-(id)_beginManagedContextSession;
-(void)_enumerateDownloadsForIdentifiers:(id)arg1 context:(id)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(id)_clientForObjectID:(id)arg1 ;
-(id)_clientForPayment:(id)arg1 ;
-(void)addPaymentWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)cancelDownloadsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)cancelRequestWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)checkQueueForClientWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)finishPaymentWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)getTransactionsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)pauseDownloadsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)productsRequestWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)registerClientWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)restoreCompletedTransactionsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)resumeDownloadsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)startDownloadsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)_startFirstReadyPayment;
-(id)_clientForConnection:(id)arg1 paymentQueueClient:(id)arg2 ;
-(id)_copyDownloadsIDsFromMessage:(id)arg1 key:(const char*)arg2 ;
-(void)_setActivePaymentID:(id)arg1 ;
-(id)_firstReadyPaymentInContext:(id)arg1 ;
-(void)_finishPaymentOperationForPaymentID:(id)arg1 result:(BOOL)arg2 error:(id)arg3 ;
-(void)startFirstReadyPayment;
-(void)dealloc;
-(id)init;
-(void)start;
-(id)_clients;
-(void)_dispatchAsync:(/*^block*/ id)arg1 ;
-(void)checkQueueForClientWithIdentifier:(id)arg1 URLBagContext:(id)arg2 ;
-(void)_networkTypeChanged:(id)arg1 ;
@end
