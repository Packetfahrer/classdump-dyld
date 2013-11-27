/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface CKMultiDict : NSObject {

	NSObject<OS_dispatch_queue>* _lockQueue;
	unsigned _count;
	NSMutableDictionary* _dictionary;

}

@property (nonatomic,retain) NSObject<OS_dispatch_queue> * lockQueue;              //@synthesize lockQueue=_lockQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dictionary;                     //@synthesize dictionary=_dictionary - In the implementation block
-(void)dealloc;
-(unsigned)count;
-(id)init;
-(void)removeAllObjects;
-(id)description;
-(id)dictionary;
-(id)allKeys;
-(void)pushObject:(id)arg1 forKey:(id)arg2 ;
-(id)popObjectForKey:(id)arg1 ;
-(id)peekObjectForKey:(id)arg1 ;
-(void)enqueueObject:(id)arg1 forKey:(id)arg2 ;
-(id)headObjectForKey:(id)arg1 ;
-(id)dequeueObjectForKey:(id)arg1 ;
-(id)objectsForKey:(id)arg1 ;
-(void)removeObjectsForKey:(id)arg1 ;
-(id)lockQueue;
-(void)setLockQueue:(id)arg1 ;
-(void)setDictionary:(id)arg1 ;
@end
