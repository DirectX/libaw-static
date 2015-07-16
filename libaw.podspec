Pod::Spec.new do |s|

  s.name         = "libaw"
  s.version      = "0.0.3"
  s.summary      = "AdWired static library for iOS 7.0+ with CocoaPod support"
  s.description  = <<-DESC
                   DESC
  s.homepage     = "http://adwired.net"
  s.license      = "MIT (example)"
  s.author       = { "" => "denis@adwired.net" }
  s.platform     = :ios
  s.source_files  = "h/*.h"
  s.vendored_library = "lib/libaw.a"
  s.requires_arc = true
  s.dependency "AFNetworking"

end
