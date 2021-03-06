/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Nike.app/Nike
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDate, NSDictionary;

@interface STWorkout : NSObject {

	NSString* _name;
	NSDate* _date;
	int _workoutType;
	int _workoutPreset;
	float _customWorkoutValue;
	int _musicSelection;
	unsigned long long _musicSelectionPersistentUID;

}

@property (nonatomic,readonly) NSDictionary * workoutPropertyList; 
@property (nonatomic,copy) NSString * name;                                               //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * filename; 
@property (assign,nonatomic) int workoutType;                                             //@synthesize workoutType=_workoutType - In the implementation block
@property (assign,nonatomic) int workoutPreset;                                           //@synthesize workoutPreset=_workoutPreset - In the implementation block
@property (assign,nonatomic) float customWorkoutValue;                                    //@synthesize customWorkoutValue=_customWorkoutValue - In the implementation block
@property (assign,nonatomic) int musicSelection;                                          //@synthesize musicSelection=_musicSelection - In the implementation block
@property (assign,nonatomic) unsigned long long musicSelectionPersistentUID;              //@synthesize musicSelectionPersistentUID=_musicSelectionPersistentUID - In the implementation block
@property (nonatomic,retain) NSDate * date;                                               //@synthesize date=_date - In the implementation block
+(id)workoutForPropertyList:(id)arg1 shouldUpdateOnDisk:(BOOL*)arg2 ;
-(void)setWorkoutType:(int)arg1 ;
-(void)setWorkoutPreset:(int)arg1 ;
-(void)setCustomWorkoutValue:(float)arg1 ;
-(void)setMusicSelectionPersistentUID:(unsigned long long)arg1 ;
-(id)workoutPropertyList;
-(int)workoutType;
-(int)workoutPreset;
-(float)customWorkoutValue;
-(unsigned long long)musicSelectionPersistentUID;
-(int)compareToWorkout:(id)arg1 ;
-(int)musicSelection;
-(void)setMusicSelection:(int)arg1 ;
-(void)dealloc;
-(id)description;
-(id)date;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)setDate:(id)arg1 ;
-(id)filename;
@end

