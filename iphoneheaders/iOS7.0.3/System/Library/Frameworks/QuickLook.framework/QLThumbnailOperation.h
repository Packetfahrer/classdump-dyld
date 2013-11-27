/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <Foundation/NSOperation.h>

@class UIImage;

@interface QLThumbnailOperation : NSOperation {

	int _index;
	CGSize _size;
	UIImage* _image;

}

@property (assign) int index;                    //@synthesize index=_index - In the implementation block
@property (assign) CGSize size;                  //@synthesize size=_size - In the implementation block
@property (retain) UIImage * image;              //@synthesize image=_image - In the implementation block
-(void)dealloc;
-(CGSize)size;
-(void)setImage:(id)arg1 ;
-(id)init;
-(id)image;
-(void)setSize:(CGSize)arg1 ;
-(int)index;
-(void)setIndex:(int)arg1 ;
@end
