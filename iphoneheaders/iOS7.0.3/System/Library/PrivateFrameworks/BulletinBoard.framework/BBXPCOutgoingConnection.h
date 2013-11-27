/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <BulletinBoard/BBXPCConnection.h>

@class NSString, NSInvocation;

@interface BBXPCOutgoingConnection : BBXPCConnection {

	NSString* _name;
	BOOL _autoReconnect;
	NSInvocation* _connectionEstablishmentInvocation;

}

@property (nonatomic,readonly) NSString * serviceName;                                      //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL autoReconnects;                                           //@synthesize autoReconnect=_autoReconnect - In the implementation block
@property (nonatomic,retain) NSInvocation * connectionEstablishmentInvocation;              //@synthesize connectionEstablishmentInvocation=_connectionEstablishmentInvocation - In the implementation block
-(id)serviceName;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(void)resume;
-(id)initWithServiceName:(id)arg1 queue:(id)arg2 target:(id)arg3 remoteProtocol:(id)arg4 ;
-(id)_signatureForSelectorInRemoteProtocol:(SEL)arg1 ;
-(void)_connectionEstablishedResponse:(id)arg1 ;
-(void)setConnectionEstablishmentInvocation:(id)arg1 ;
-(void)_configureRemoteProxy;
-(BOOL)autoReconnects;
-(void)setEstablishmentSelector:(SEL)arg1 andSendObject:(id)arg2 ;
-(void)setAutoReconnects:(BOOL)arg1 ;
-(id)connectionEstablishmentInvocation;
@end
