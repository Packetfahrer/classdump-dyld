/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibraryServices/PLChangeNotification.h>

@class UIImage, NSString;

@interface PLCameraPreviewImageWellChangeNotification : PLChangeNotification {

	UIImage* _image;
	NSString* _uuid;

}

@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,readonly) NSString * assetUUID; 
+(id)notification;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)_init;
-(id)image;
-(id)userInfo;
-(id)name;
-(id)object;
-(id)assetUUID;
@end
