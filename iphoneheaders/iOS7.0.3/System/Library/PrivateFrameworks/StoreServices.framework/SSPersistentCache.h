/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSFileManager, NSObject;

@interface SSPersistentCache : NSObject {

	BOOL _safeKeys;
	NSString* _identifier;
	NSString* _cacheName;
	NSString* _path;
	NSFileManager* _fm;
	NSObject<OS_dispatch_queue>* _serialQueue;

}
+(id)safeKeyForKey:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(BOOL)clear;
-(BOOL)setData:(id)arg1 forKey:(id)arg2 ;
-(id)dataForKey:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 cacheName:(id)arg2 ;
-(BOOL)removeDataForKey:(id)arg1 ;
-(id)_pathForKey:(id)arg1 ;
-(BOOL)_isFileNotFound:(id)arg1 ;
-(void)setFilenameSafeKeys:(BOOL)arg1 ;
@end
