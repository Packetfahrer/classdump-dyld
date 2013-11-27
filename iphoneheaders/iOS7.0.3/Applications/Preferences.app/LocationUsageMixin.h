/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Preferences.app/Preferences
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <Preferences/Preferences-Structs.h>
@class PSTableCell, UIImageView;

@interface LocationUsageMixin : NSObject {

	PSTableCell* _cell;
	int _usage;
	UIImageView* _usageIndicator;
	BOOL _labelOverlapsIndicator;
	float horizontalOffset;

}

@property (assign,nonatomic) int usage;                           //@synthesize usage=_usage - In the implementation block
@property (assign,nonatomic) float horizontalOffset; 
-(id)iconNameForUsage:(int)arg1 ;
-(CGSize)usageIndicatorSize;
-(float)horizontalOffset;
-(void)layoutUsageIndicator;
-(void)setHorizontalOffset:(float)arg1 ;
-(void)dealloc;
-(id)initWithTableCell:(id)arg1 ;
-(void)setUsage:(int)arg1 ;
-(int)usage;
@end
