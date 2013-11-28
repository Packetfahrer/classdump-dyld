/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:08:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSData;

@interface DaemonBiometricOptInOperation : ISOperation {

	NSData* _authToken;
	BOOL _requiresStoreAuthentication;
	/*^block*/ id _resultBlock;

}

@property (nonatomic,copy) NSData * authToken; 
@property (assign) BOOL requiresStoreAuthentication; 
@property (copy) id resultBlock; 
-(BOOL)requiresStoreAuthentication;
-(id)_authenticateWithAccount:(id)arg1 error:(id*)arg2 ;
-(BOOL)_registerAccount:(id)arg1 withAuthToken:(id)arg2 ;
-(void)setRequiresStoreAuthentication:(BOOL)arg1 ;
-(id)authToken;
-(void)setAuthToken:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)run;
-(void)setResultBlock:(/*^block*/ id)arg1 ;
-(/*^block*/ id)resultBlock;
@end
