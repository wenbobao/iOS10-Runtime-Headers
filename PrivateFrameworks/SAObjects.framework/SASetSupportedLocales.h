/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray;

@interface SASetSupportedLocales : SABaseClientBoundCommand  {
}

@property(copy) NSArray * locales;

+ (id)setSupportedLocalesWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setSupportedLocales;

- (void)setLocales:(id)arg1;
- (id)locales;
- (bool)requiresResponse;
- (id)encodedClassName;
- (id)groupIdentifier;

@end