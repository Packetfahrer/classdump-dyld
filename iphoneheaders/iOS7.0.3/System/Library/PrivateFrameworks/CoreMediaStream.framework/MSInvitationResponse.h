/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class MSShare;

@interface MSInvitationResponse : NSObject {

	MSShare* _invitation;
	BOOL _accept;

}

@property (nonatomic,retain) MSShare * invitation;              //@synthesize invitation=_invitation - In the implementation block
@property (assign,nonatomic) BOOL accept;                       //@synthesize accept=_accept - In the implementation block
+(id)responseWithInvitation:(id)arg1 accept:(BOOL)arg2 ;
-(id)initWithInvitation:(id)arg1 accept:(BOOL)arg2 ;
-(id)invitation;
-(void)setInvitation:(id)arg1 ;
-(void).cxx_destruct;
-(BOOL)accept;
-(void)setAccept:(BOOL)arg1 ;
@end
