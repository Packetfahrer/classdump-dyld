/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/MFPBrush.h>

@class TSUColor;

@interface MFPSolidBrush : MFPBrush {

	TSUColor* mColor;

}
-(void)dealloc;
-(id)color;
-(void)setColor:(id)arg1 ;
-(id)initWithColor:(id)arg1 ;
-(void)fillPath:(id)arg1 evenOddRule:(BOOL)arg2 ;
@end
