/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WebUICertificateError : NSObject

+ (bool)canAuthenticateAgainstProtectionSpace:(id)arg1;
+ (bool)isClientCertificateError:(long long)arg1;
+ (bool)isServerCertificateError:(long long)arg1;
+ (id)newAlertToHandleClientSideCertificateErrorCode:(long long)arg1 context:(id)arg2;
+ (id)newAlertToListPossibleClientSideCertificatesWithContext:(id)arg1;
+ (bool)proceedWithClientCertificateIdentity:(struct __SecIdentity { }*)arg1 context:(id)arg2;
+ (bool)userAllowsCertificateTrust:(struct __SecTrust { }*)arg1 host:(id)arg2 applicationDisplayName:(id)arg3;

@end