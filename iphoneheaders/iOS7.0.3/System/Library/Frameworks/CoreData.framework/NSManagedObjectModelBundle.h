/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSBundle, NSDictionary;

@interface NSManagedObjectModelBundle : NSObject {

	NSBundle* _bundle;
	NSDictionary* _versionInfoDictionary;

}
-(id)_modelForVersionHashes:(id)arg1 ;
-(id)optimizedVersionURL;
-(id)currentVersionURL;
-(id)versionInfoDictionary;
-(id)versionHashInfo;
-(id)urlForModelVersionWithName:(id)arg1 ;
-(id)modelVersions;
-(id)_modelForVersionHashes:(id)arg1 inStyle:(unsigned)arg2 ;
-(void)dealloc;
-(id)bundle;
-(id)initWithPath:(id)arg1 ;
-(id)currentVersion;
@end
