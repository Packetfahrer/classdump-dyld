/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/VoiceServices/PlugIns/VoiceDial.vsplugin/VoiceDial
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VoiceServices/VSRecognitionResultHandler.h>

@class VoiceDialNameDataSource;

@interface VoiceDialResultHandler : NSObject <VSRecognitionResultHandler> {

	void* _addressBook;
	VoiceDialNameDataSource* _nameSource;

}
-(void*)_addressBook;
-(id)actionForRecognitionResults:(id)arg1 ;
-(id)_nameSource;
-(id)_phoneticNames:(id)arg1 fromDictionary:(id)arg2 ;
@end
