/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:48:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SyncBundles/MobileSlideShow.syncBundle/MobileSlideShow
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString;

@interface PLSyncFileStatusPair : NSObject {

	NSString* _path;
	int _status;

}

@property (nonatomic,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) int status;                     //@synthesize status=_status - In the implementation block
-(void)dealloc;
-(id)path;
-(id)initWithPath:(id)arg1 ;
-(int)status;
-(void)setStatus:(int)arg1 ;
@end
