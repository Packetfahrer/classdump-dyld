/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <AVConference/AVConference-Structs.h>
@interface TCPBufferPool : NSObject {

	int poolSize;
	tagBufferNode* head;
	tagBufferNode* tail;
	tagBufferNode* avail;
	int poolLock;

}
-(void)dealloc;
-(id)init;
-(void)monitorBufferPool;
-(char*)getBufferFromPool:(int)arg1 ;
-(void)returnBufferToPool:(char*)arg1 ;
-(void)finalize;
@end
