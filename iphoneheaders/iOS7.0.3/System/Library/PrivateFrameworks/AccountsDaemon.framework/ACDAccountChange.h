/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class ACAccount;

@interface ACDAccountChange : NSObject {

	int _changeType;
	ACAccount* _account;
	ACAccount* _oldAccount;

}

@property (assign,nonatomic) int changeType;                      //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,retain) ACAccount * account;                 //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) ACAccount * oldAccount;              //@synthesize oldAccount=_oldAccount - In the implementation block
+(id)changeWithChangeType:(int)arg1 account:(id)arg2 oldAccount:(id)arg3 ;
-(void)setChangeType:(int)arg1 ;
-(void)setOldAccount:(id)arg1 ;
-(id)initWithChangeType:(int)arg1 account:(id)arg2 oldAccount:(id)arg3 ;
-(id)oldAccount;
-(id)account;
-(void)setAccount:(id)arg1 ;
-(int)changeType;
-(void).cxx_destruct;
@end
