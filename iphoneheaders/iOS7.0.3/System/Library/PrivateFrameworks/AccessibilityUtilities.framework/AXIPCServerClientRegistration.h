/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString;

@interface AXIPCServerClientRegistration : NSObject {

	unsigned _port;
	NSString* _identifier;

}

@property (assign,nonatomic) unsigned port;                      //@synthesize port=_port - In the implementation block
@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(void)setPort:(unsigned)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(unsigned)port;
@end
