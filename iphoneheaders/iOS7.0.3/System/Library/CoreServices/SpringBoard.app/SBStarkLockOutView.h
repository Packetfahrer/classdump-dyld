/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, UIImageView, NSArray;

@interface SBStarkLockOutView : UIView {

	NSMutableArray* _titleLabels;
	float _titleAscender;
	float _titleDescender;
	UIImageView* _imageView;
	CGSize _imageSize;
	NSMutableArray* _messageLabels;
	float _messageAscender;
	float _messageDescender;
	NSArray* _baselineSeparations;
	float _verticalOffset;

}
-(id)initWithFrame:(CGRect)arg1 titleLines:(id)arg2 image:(id)arg3 messageLines:(id)arg4 baselineSeparations:(id)arg5 verticalOffset:(float)arg6 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
@end
