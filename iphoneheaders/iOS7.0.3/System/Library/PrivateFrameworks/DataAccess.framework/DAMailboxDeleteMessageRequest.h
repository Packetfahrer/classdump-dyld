/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DataAccess/DAMailboxRequest.h>

@class NSString;

@interface DAMailboxDeleteMessageRequest : DAMailboxRequest {

	NSString* _messageID;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)messageID;
-(id)initRequestWithMessageID:(id)arg1 ;
@end
