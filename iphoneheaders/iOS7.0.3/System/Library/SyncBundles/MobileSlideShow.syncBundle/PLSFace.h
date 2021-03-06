/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:11:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SyncBundles/MobileSlideShow.syncBundle/MobileSlideShow
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <MobileSlideShow/MobileSlideShow-Structs.h>
@class NSString;

@interface PLSFace : NSObject {

	NSString* _albumUUID;
	short _identifier;
	CGRect _relativeRect;

}

@property (assign,nonatomic) CGRect relativeRect;               //@synthesize relativeRect=_relativeRect - In the implementation block
@property (assign,nonatomic) short identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * albumUUID;              //@synthesize albumUUID=_albumUUID - In the implementation block
-(id)initWithFaceInfo:(id)arg1 ;
-(void)dealloc;
-(short)identifier;
-(void)setIdentifier:(short)arg1 ;
-(void)setRelativeRect:(CGRect)arg1 ;
-(void)setAlbumUUID:(id)arg1 ;
-(CGRect)relativeRect;
-(id)albumUUID;
@end

