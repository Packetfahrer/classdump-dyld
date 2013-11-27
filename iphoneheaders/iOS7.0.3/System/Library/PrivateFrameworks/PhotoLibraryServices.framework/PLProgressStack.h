/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableArray, NSString;

@interface PLProgressStack : NSObject {

	BOOL notifyUsingAssetsdNotificationCenter;
	id delegate;
	float currentMultiplier;
	NSMutableArray* multipliers;
	float currentTotal;
	NSString* mediaPathString;

}

@property (assign,nonatomic) id delegate; 
@property (assign,nonatomic) float currentMultiplier; 
@property (nonatomic,retain) NSMutableArray * multipliers; 
@property (assign,nonatomic) float currentTotal; 
@property (assign,nonatomic) BOOL notifyUsingAssetsdNotificationCenter; 
@property (nonatomic,retain) NSString * mediaPathString; 
+(id)unarchiveFromDictionary:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)pop;
-(void)updateProgress:(float)arg1 ;
-(void)setCurrentMediaPath:(id)arg1 ;
-(void)popAndUpdate;
-(void)setCurrentMultiplier:(float)arg1 ;
-(void)setMultipliers:(id)arg1 ;
-(id)multipliers;
-(float)currentTotal;
-(float)currentMultiplier;
-(void)setCurrentTotal:(float)arg1 ;
-(void)setMediaPathString:(id)arg1 ;
-(float)totalProgress:(float)arg1 ;
-(BOOL)notifyUsingAssetsdNotificationCenter;
-(id)mediaPathString;
-(id)initWithDelegate:(id)arg1 ;
-(void)setNotifyUsingAssetsdNotificationCenter:(BOOL)arg1 ;
-(void)push:(float)arg1 ;
-(id)archiveToDictionary;
@end
