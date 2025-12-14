---
layout: lua
title: SpaceManager
lang: en
category: Class
---

# Class "SpaceManager"

<!-- Head content to be pulled from "lua-source-parts-inject/Hyperspace/SpaceManager/_head.md" -->





## Methods
{: #Methods .lua-content-section}
### CreateAsteroid ()
{: #CreateAsteroid .lua-content-item aria-label='Methods' }
#### [Asteroid](../Hyperspace/Asteroid) :CreateAsteroid ([Pointf](../Hyperspace/Pointf) position, integer space, integer ownerId, [Pointf](../Hyperspace/Pointf) target, integer targetSpace, number heading)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/SpaceManager/CreateAsteroid(Hyperspace.Pointf,integer,integer,Hyperspace.Pointf,integer,number).md" -->

___
### CreateBeam ()
{: #CreateBeam .lua-content-item aria-label='Methods' }
#### [BeamWeapon](../Hyperspace/BeamWeapon) :CreateBeam ([WeaponBlueprint](../Hyperspace/WeaponBlueprint) weapon, [Pointf](../Hyperspace/Pointf) position, integer space, integer ownerId, [Pointf](../Hyperspace/Pointf) target1, [Pointf](../Hyperspace/Pointf) target2, integer targetSpace, integer length, number heading)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/SpaceManager/CreateBeam(Hyperspace.WeaponBlueprint,Hyperspace.Pointf,integer,integer,Hyperspace.Pointf,Hyperspace.Pointf,integer,integer,number).md" -->

___
### CreateBomb ()
{: #CreateBomb .lua-content-item aria-label='Methods' }
#### [BombProjectile](../Hyperspace/BombProjectile) :CreateBomb ([WeaponBlueprint](../Hyperspace/WeaponBlueprint) weapon, integer ownerId, [Pointf](../Hyperspace/Pointf) target, integer targetSpace)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/SpaceManager/CreateBomb(Hyperspace.WeaponBlueprint,integer,Hyperspace.Pointf,integer).md" -->

___
### CreateBurstProjectile ()
{: #CreateBurstProjectile .lua-content-item aria-label='Methods' }
#### [LaserBlast](../Hyperspace/LaserBlast) :CreateBurstProjectile ([WeaponBlueprint](../Hyperspace/WeaponBlueprint) weapon, string image, boolean fake, [Pointf](../Hyperspace/Pointf) position, integer space, integer ownerId, [Pointf](../Hyperspace/Pointf) target, integer targetSpace, number heading)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/SpaceManager/CreateBurstProjectile(Hyperspace.WeaponBlueprint,string,boolean,Hyperspace.Pointf,integer,integer,Hyperspace.Pointf,integer,number).md" -->

___
### CreateLaserBlast ()
{: #CreateLaserBlast .lua-content-item aria-label='Methods' }
#### [LaserBlast](../Hyperspace/LaserBlast) :CreateLaserBlast ([WeaponBlueprint](../Hyperspace/WeaponBlueprint) weapon, [Pointf](../Hyperspace/Pointf) position, integer space, integer ownerId, [Pointf](../Hyperspace/Pointf) target, integer targetSpace, number heading)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/SpaceManager/CreateLaserBlast(Hyperspace.WeaponBlueprint,Hyperspace.Pointf,integer,integer,Hyperspace.Pointf,integer,number).md" -->

___
### CreateMissile ()
{: #CreateMissile .lua-content-item aria-label='Methods' }
#### [Missile](../Hyperspace/Missile) :CreateMissile ([WeaponBlueprint](../Hyperspace/WeaponBlueprint) weapon, [Pointf](../Hyperspace/Pointf) position, integer space, integer ownerId, [Pointf](../Hyperspace/Pointf) target, integer targetSpace, number heading)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/SpaceManager/CreateMissile(Hyperspace.WeaponBlueprint,Hyperspace.Pointf,integer,integer,Hyperspace.Pointf,integer,number).md" -->

___
### CreatePDSFire ()
{: #CreatePDSFire .lua-content-item aria-label='Methods' }
#### [PDSFire](../Hyperspace/PDSFire) :CreatePDSFire ([WeaponBlueprint](../Hyperspace/WeaponBlueprint) weapon, [Point](../Hyperspace/Point) position, [Pointf](../Hyperspace/Pointf) target, integer targetSpace, boolean smoke)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/SpaceManager/CreatePDSFire(Hyperspace.WeaponBlueprint,Hyperspace.Point,Hyperspace.Pointf,integer,boolean).md" -->

___
### DangerousEnvironment ()
{: #DangerousEnvironment .lua-content-item aria-label='Methods' }
#### boolean :DangerousEnvironment ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/SpaceManager/DangerousEnvironment().md" -->

___
### SwitchBackground ()
{: #SwitchBackground .lua-content-item aria-label='Methods' }
#### [ImageDesc](../Hyperspace/ImageDesc) :SwitchBackground (string name)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/SpaceManager/SwitchBackground(string).md" -->

___
### SwitchPlanet ()
{: #SwitchPlanet .lua-content-item aria-label='Methods' }
#### [ImageDesc](../Hyperspace/ImageDesc) :SwitchPlanet (string name)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/SpaceManager/SwitchPlanet(string).md" -->

___
### UpdatePlanetImage ()
{: #UpdatePlanetImage .lua-content-item aria-label='Methods' }
#### void :UpdatePlanetImage ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/SpaceManager/UpdatePlanetImage().md" -->

___
### UpdateProjectile ()
{: #UpdateProjectile .lua-content-item aria-label='Methods' }
#### void :UpdateProjectile ([Projectile](../Hyperspace/Projectile) proj)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/SpaceManager/UpdateProjectile(Hyperspace.Projectile).md" -->

___


## Fields
{: #Fields .lua-content-section}
### asteroidGenerator (Read-only)
{: #asteroidGenerator .lua-content-item aria-label='Fields' }
#### [AsteroidGenerator](../Hyperspace/AsteroidGenerator) .asteroidGenerator
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/SpaceManager/asteroidGenerator.md" -->

___
### bNebula (Read-only)
{: #bNebula .lua-content-item aria-label='Fields' }
#### boolean .bNebula
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/SpaceManager/bNebula.md" -->

___
### bPDS (Read-only)
{: #bPDS .lua-content-item aria-label='Fields' }
#### boolean .bPDS
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/SpaceManager/bPDS.md" -->

___
### bStorm (Read-only)
{: #bStorm .lua-content-item aria-label='Fields' }
#### boolean .bStorm
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/SpaceManager/bStorm.md" -->

___
### currentBack
{: #currentBack .lua-content-item aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .currentBack
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/SpaceManager/currentBack.md" -->

___
### currentPlanet
{: #currentPlanet .lua-content-item aria-label='Fields' }
#### [ImageDesc](../Hyperspace/ImageDesc) .currentPlanet
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/SpaceManager/currentPlanet.md" -->

___
### drones (Read-only)
{: #drones .lua-content-item aria-label='Fields' }
#### vector\<[SpaceDrone](../Hyperspace/SpaceDrone)\> .drones
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/SpaceManager/drones.md" -->
**Read-only**
<!-- End of content -->

___
### envTarget
{: #envTarget .lua-content-item aria-label='Fields' }
#### integer .envTarget
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/SpaceManager/envTarget.md" -->

___
### gamePaused (Read-only)
{: #gamePaused .lua-content-item aria-label='Fields' }
#### boolean .gamePaused
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/SpaceManager/gamePaused.md" -->
**Read-only**
[`AsteroidGenerator`](#AsteroidGenerator) `.asteroidGenerator`
`.asteroidGenerator.bRunning` will indicate if the current space has an asteroid hazard, similar to the variables below
**Read-only**
`bool` `.sunLevel`
**Read-only**
`bool` `.pulsarLevel`
**Read-only**
`bool` `.bPDS`
**Read-only**
`int` `.envTarget`
Dictate the current target of the PDS (0: player, 1: enemy, 2: both)
`bool` `.bNebula`
**Read-only**
`bool` `.bStorm`
**Read-only**
<!-- End of content -->

___
### projectiles (Read-only)
{: #projectiles .lua-content-item aria-label='Fields' }
#### vector\<[Projectile](../Hyperspace/Projectile)\> .projectiles
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/SpaceManager/projectiles.md" -->
**Read-only**
<!-- End of content -->

___
### pulsarLevel (Read-only)
{: #pulsarLevel .lua-content-item aria-label='Fields' }
#### boolean .pulsarLevel
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/SpaceManager/pulsarLevel.md" -->

___
### sunLevel (Read-only)
{: #sunLevel .lua-content-item aria-label='Fields' }
#### boolean .sunLevel
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/SpaceManager/sunLevel.md" -->

___
