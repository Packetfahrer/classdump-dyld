/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSCoding.h>

@class NSString;

@interface MFOfflineTransferFailureSnapshot : NSObject <NSCoding> {

	NSString* _originalRemoteID;
	NSString* _originalMailboxID;
	unsigned long long _originalMessageFlags;

}

@property (nonatomic,readonly) NSString * originalRemoteID;                          //@synthesize originalRemoteID=_originalRemoteID - In the implementation block
@property (nonatomic,readonly) NSString * originalMailboxID;                         //@synthesize originalMailboxID=_originalMailboxID - In the implementation block
@property (nonatomic,readonly) unsigned long long originalMessageFlags;              //@synthesize originalMessageFlags=_originalMessageFlags - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)originalMailboxID;
-(id)originalRemoteID;
-(id)initWithOriginalRemoteID:(id)arg1 mailboxID:(id)arg2 messageFlags:(unsigned long long)arg3 ;
-(unsigned long long)originalMessageFlags;
@end
