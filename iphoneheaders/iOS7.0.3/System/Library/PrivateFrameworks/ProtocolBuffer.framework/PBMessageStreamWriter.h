/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSOutputStream;

@interface PBMessageStreamWriter : NSObject {

	NSOutputStream* _stream;

}
-(void)dealloc;
-(id)initWithOutputStream:(id)arg1 ;
-(BOOL)writeMessage:(id)arg1 ;
@end
